#include<iostream>
#include<cmath>
using namespace std;

class Solution5
{
public:
	bool isNumeric(char* string)
	{
		//标记符号、小数点、e是否出现过
		bool sign = false, decimal = false, hasE = false;
		for (int i = 0; i < strlen(string); i++)
		{
			if (string[i] == 'e' || string[i] == 'E')
			{
				if (i == strlen(string) - 1)
					return false;//e后面一定要有数字，所以e不能再最后
				if (hasE)
					return false;//不能有两个e同事存在
				hasE = true;
			}
			else if (string[i] == '+' || string[i] == '-')
			{
				//第二次出现+-符号，且不是在字符串开头，则也必须紧挨在e后面
				if (sign && string[i - 1] != 'e' && string[i - 1] != 'E')
					return false;
				//第一次出现+-符号，且不是在字符串开头，则也必须紧挨在e之后
				if (!sign && i > 0 && string[i - 1] != 'e' && string[i - 1] != 'E')
					return false;
				sign = true;
			}
			else if (string[i] == '.')
			{
				//e后面不能接小数点，小数点不能出现两次
				if (hasE || decimal)
					return false;
				decimal = true;
			}
			else if (string[i] <'0' || string[i] > '9')
				return false;
		}
		return true;
	}
};

int main05()
{
	char *string = new char;
	cin >> string;
	Solution5 s;
	cout << boolalpha << s.isNumeric(string) << endl;
	return 0;
}
#include<iostream>
#include<cmath>
using namespace std;

class Solution5
{
public:
	bool isNumeric(char* string)
	{
		//��Ƿ��š�С���㡢e�Ƿ���ֹ�
		bool sign = false, decimal = false, hasE = false;
		for (int i = 0; i < strlen(string); i++)
		{
			if (string[i] == 'e' || string[i] == 'E')
			{
				if (i == strlen(string) - 1)
					return false;//e����һ��Ҫ�����֣�����e���������
				if (hasE)
					return false;//����������eͬ�´���
				hasE = true;
			}
			else if (string[i] == '+' || string[i] == '-')
			{
				//�ڶ��γ���+-���ţ��Ҳ������ַ�����ͷ����Ҳ���������e����
				if (sign && string[i - 1] != 'e' && string[i - 1] != 'E')
					return false;
				//��һ�γ���+-���ţ��Ҳ������ַ�����ͷ����Ҳ���������e֮��
				if (!sign && i > 0 && string[i - 1] != 'e' && string[i - 1] != 'E')
					return false;
				sign = true;
			}
			else if (string[i] == '.')
			{
				//e���治�ܽ�С���㣬С���㲻�ܳ�������
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
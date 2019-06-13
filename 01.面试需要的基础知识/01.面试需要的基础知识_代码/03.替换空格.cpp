#include<iostream>
using namespace std;

class Solution3
{
public:
	void replaceSpace(char *str, int length)
	{
		if (str == NULL || length <= 0)
			return;
		int OldLength = 0;
		int OldSpaceLength = 0;
		int i = 0;
		while(str[i] != '\0')
		{
			OldLength++;
			if (str[i] == ' ')
				OldSpaceLength++;
			i++;
		}
		int NewLength = OldLength + OldSpaceLength * 2;
		while (OldLength >= 0 && NewLength > OldLength)
		{
			if (str[OldLength] == ' ')
			{
				str[NewLength--] = '0';
				str[NewLength--] = '2';
				str[NewLength--] = '%';
			}
			else
				str[NewLength--] = str[OldLength];
			OldLength--;
		}
	}
};

int main03()
{
	Solution3 s;
	char str[] = "We are happy";
	int length = sizeof(str);
	s.replaceSpace(str, length);
	cout << str << endl;
	return 0;
}
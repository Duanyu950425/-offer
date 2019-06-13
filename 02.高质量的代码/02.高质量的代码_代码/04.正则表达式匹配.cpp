#include<iostream>
#include<cmath>
using namespace std;

class Solution4
{
public:
	bool match(char* str, char* pattern)
	{
		if (str == NULL || pattern == NULL)
			return false;
		return matchCore(str, pattern);
	}
	bool matchCore(char* str, char* pattern)
	{
		if (*str == '\0' && *pattern == '\0')
			return true;
		if (*str != '\0' && *pattern == '\0')
			return false;
		//if the next character in pattern is not '*'
		if (*(pattern + 1) != '*')
		{
			if (*str == *pattern || (*str != '\0' && *pattern == '.'))
				return matchCore(str + 1, pattern + 1);
			else
				return false;
		}
		//if the next character in pattern is '*'
		else
		{
			if (*str == *pattern || (*str != '\0' && *pattern == '.'))
				return matchCore(str, pattern + 2) || matchCore(str + 1, pattern);
			else
				return matchCore(str, pattern + 2);
		}
		return false;
	}
};

int main04()
{
	Solution4 s;
	char *str = "aaa";
	char *pattern = "ab*a";
	cout << boolalpha << s.match(str, pattern) << endl;
	return 0;
}
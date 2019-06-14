#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Solution13 
{
public:
	int  NumberOf1(int n) 
	{
		int count = 0;
		while (n)
		{
			++count;
			n = (n - 1) & n;
		}
		return count;
	}
};
int main13()
{
	Solution13 s;
	int n;
	cin >> n;
	cout << s.NumberOf1(n) << endl;
	return 0;
}
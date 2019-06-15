#include<iostream>
#include<vector>
#include<queue>
#include<stack>
using namespace std;

class Solution 
{
public:
	stack<int> Val;
	stack<int> Min;
	void push(int value) 
	{
		Val.push(value);
		if (Min.empty())
			Min.push(value);
		else
		{
			if (value < Min.top())
				Min.push(value);
			else
				Min.push(Min.top());
		}
	}
	void pop() 
	{
		Min.pop();
	}
	int top() 
	{
		return Min.top();
	}
	int min() 
	{
		return Min.top();
	}
};

int main04()
{
	Solution s;
	s.push(2);
	s.push(3);
	s.push(9);
	s.push(8);
	s.push(1);

	cout << s.min() << endl;
	return 0;
}
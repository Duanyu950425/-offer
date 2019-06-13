#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Solution7
{
public:
	void push(int node) 
	{
		stack1.push(node);
	}

	int pop() 
	{
		int top;
		if (stack2.empty())
		{
			while (!stack1.empty())
			{
				stack2.push(stack1.top());
				stack1.pop();
			}
		}
		top = stack2.top();
		stack2.pop();
		return top;
	}

private:
	stack<int> stack1;
	stack<int> stack2;
};
int main07()
{
	int a = 1;
	int b = 2;
	
	Solution7 s;
	s.push(a);
	s.push(b);
	
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	
	int c = 3;
	int d = 4;

	s.push(c);
	s.push(d);
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	return 0;
}
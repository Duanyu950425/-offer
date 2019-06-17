#include<iostream>
#include<vector>
#include<queue>
#include<stack>
using namespace std;

class Solution 
{
public:
	bool IsPopOrder(vector<int> pushV, vector<int> popV) 
	{
		if (pushV.empty() || popV.empty() || pushV.size() != popV.size())
			return false;
		int size = popV.size();
		int j = 0;
		stack<int> s;
		for (int i = 0; i < pushV.size(); ++i)
		{
			s.push(pushV[i]);
			while (!s.empty() && s.top() == popV[j])
			{
				s.pop();
				++j;
			}
		}
		if (s.empty())
			return true;
		return false;
	}
};
int main()
{
	vector<int> pushstack;
	vector<int> popstack;
	pushstack.push_back(1);
	pushstack.push_back(2);
	pushstack.push_back(3);
	pushstack.push_back(4);
	pushstack.push_back(5);

	vector<int>::iterator it = pushstack.begin();
	for (; it != pushstack.end(); it++)
		cout << *it << " ";
	cout << endl;

	popstack.push_back(4);
	popstack.push_back(5);
	popstack.push_back(3);
	popstack.push_back(2);
	popstack.push_back(1);

	vector<int>::iterator it2 = popstack.begin();
	for (; it2 != popstack.end(); it2++)
		cout << *it2 << " ";
	cout << endl;


	Solution s;
	cout << boolalpha << s.IsPopOrder(pushstack, popstack) << endl;
	return 0;
}
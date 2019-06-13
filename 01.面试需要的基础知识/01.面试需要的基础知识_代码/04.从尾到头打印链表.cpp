#include<iostream>
#include<vector>
#include<stack>
using namespace std;

struct ListNode
{
	int val;
	struct ListNode *next;
	ListNode(int x) :val(x), next(NULL) {}
};

class Solution4
{
public:
	vector<int> printListFromTailToHead(ListNode* head)
	{
		vector<int> v;
		if (head == NULL)
			return v;
		ListNode *p = head;
		stack<int> s;
		while (p != NULL)
		{
			s.push(p->val);
			p = p->next;
		}
		while (!s.empty())
		{
			v.push_back(s.top());
			s.pop();
		}
		return v;
	}
};

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

class List
{
public:
	List() { m_pList = new ListNode(NULL); m_pList->next = NULL; }
	void ListInsert(int k);//¥”Õ∑≤Â»Î
	void Show();
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
	ListNode *m_pList;
};
void List::ListInsert(int k)
{
	ListNode *newNode = new ListNode(k);
	newNode->next = m_pList->next;
	m_pList->next = newNode;
}
void List::Show()
{
	for (ListNode *current = m_pList; current; current = current->next)
	{
		cout << current->val;
		if (current->next) cout << "->";
	}
	cout << endl;
}

int main04()
{
	ListNode node1(3);
	ListNode node2(4);
	ListNode node3(5);
	ListNode node4(6);

	List *pList = new List();
	pList->m_pList = &node1;
	pList->ListInsert(node2.val);
	pList->ListInsert(node3.val);
	pList->ListInsert(node4.val);
	pList->Show();
	vector<int> v;
	v = pList->printListFromTailToHead(pList->m_pList);
	vector<int>::iterator it = v.begin();
	for (; it != v.end(); it++)
	{
		cout << *it;
		if (it != v.end() - 1)
			cout << "->";
	}	
	cout << endl;
	return 0;
}

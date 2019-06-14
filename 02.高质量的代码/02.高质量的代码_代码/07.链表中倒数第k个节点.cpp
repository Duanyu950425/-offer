#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

struct ListNode 
{
	char val;
	struct ListNode *next;
	ListNode(int x) :val(x), next(NULL) {}
}; 
class List
{
public:
	List() { pListHead = new ListNode(NULL); pListHead->next = NULL; }
	void ListInsert(ListNode *pNode);//¥”Œ≤≤Â»Î
	void Show();
	ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) 
	{
		if (pListHead == NULL || k <= 0)
			return NULL;
		ListNode *pFast = pListHead;
		for (unsigned int i = 0; i < k - 1; i++)
		{
			if (pFast->next != NULL)
				pFast = pFast->next;
			else
				return NULL;
		}
			
		ListNode *pSlow = pListHead;
		while (pFast->next != NULL)
		{
			pFast = pFast->next;
			pSlow = pSlow->next;
		}
		return pSlow;
	}
	ListNode* pListHead;
};
void List::ListInsert(ListNode *pNode)
{
	ListNode *currentNode = pListHead;
	while (currentNode->next != NULL)
	{
		currentNode = currentNode->next;
	}
	ListNode *newNode = new ListNode(pNode->val);
	newNode->next = NULL;
	currentNode->next = newNode;
}
void List::Show()
{
	for (ListNode *current = pListHead; current; current = current->next)
	{
		cout << current->val;
		if (current->next)cout << "->";
	}
	cout << endl;
}
int main07()
{
	ListNode node1('a');
	ListNode node2('b');
	ListNode node3('c');
	ListNode node4('d');
	ListNode node5('e');
	ListNode node6('f');
	ListNode node7('g');
	ListNode node8('h');

	List *pList = new List();
	pList->pListHead = &node1;
	pList->ListInsert(&node2);
	pList->ListInsert(&node3);
	pList->ListInsert(&node4);
	pList->ListInsert(&node5);
	pList->ListInsert(&node6);
	pList->ListInsert(&node7);
	pList->ListInsert(&node8);
	pList->Show();

	cout << pList->FindKthToTail(pList->pListHead, 1)->val << endl;
	return 0;
}
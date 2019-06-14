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
	List() { pHead = new ListNode(NULL); pHead->next = NULL; }
	void ListInsert(ListNode *pNode);//´ÓÎ²²åÈë
	void Show();
	ListNode* ReverseList() 
	{
		if (pHead == NULL)
			return NULL;
		ListNode *pReverseHead = NULL;
		ListNode *pCurrentNode = pHead;
		ListNode *pPreNode = NULL;
		while (pCurrentNode != NULL)
		{
			ListNode *pNext = pCurrentNode->next;
			if (pNext == NULL)
				pReverseHead = pCurrentNode;
			pCurrentNode->next = pPreNode;
			pPreNode = pCurrentNode;
			pCurrentNode = pNext;
		}
		return pReverseHead;
	}
	ListNode* pHead;
};

void List::ListInsert(ListNode *pNode)
{
	ListNode *currentNode = pHead;
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
	for (ListNode *current = pHead; current; current = current->next)
	{
		cout << current->val;
		if (current->next)cout << "->";
	}
	cout << endl;
}

int main09()
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
	pList->pHead = &node1;
	pList->ListInsert(&node2);
	pList->ListInsert(&node3);
	pList->ListInsert(&node4);
	pList->ListInsert(&node5);
	pList->ListInsert(&node6);
	pList->ListInsert(&node7);
	pList->ListInsert(&node8);
	pList->Show();

	pList->pHead = pList->ReverseList();
	pList->Show();
	return 0;
}
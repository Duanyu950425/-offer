#include<iostream>
#include<cmath>
using namespace std;

struct ListNode
{
	char m_nValue;
	ListNode *m_pNext;
	ListNode(char x) :m_nValue(x), m_pNext(NULL) {}
};
class List
{
public:
	List() { pListHead = new ListNode(NULL); pListHead->m_pNext = NULL; }
	void ListInsert(ListNode *pNode);//´ÓÎ²²åÈë
	void Show();
	void DeleteNode(ListNode *pToBeDeleted)
	{
		if (pListHead == NULL || pToBeDeleted == NULL)
			return;
		if (pToBeDeleted->m_pNext != NULL)
		{
			ListNode *pNext = pToBeDeleted->m_pNext;
			pToBeDeleted->m_nValue = pNext->m_nValue;
			pToBeDeleted->m_pNext = pNext->m_pNext;

			delete pNext;
			pNext = NULL;
		}
		else if (pListHead == pToBeDeleted)
		{
			delete pToBeDeleted;
			pToBeDeleted = NULL;
			pListHead = NULL;
		}
		else
		{
			ListNode *pNode = pListHead;
			while (pNode->m_pNext != pToBeDeleted)
				pNode = pNode->m_pNext;
			pNode->m_pNext = NULL;
			delete pToBeDeleted;
			pToBeDeleted = NULL;
		}
	}
	ListNode *pListHead;
};
void List::ListInsert(ListNode *pNode)
{
	ListNode *currentNode = pListHead;
	while (currentNode->m_pNext != NULL)
	{
		currentNode = currentNode->m_pNext;
	}
	ListNode *newNode = new ListNode(pNode->m_nValue);
	newNode->m_pNext = NULL;
	currentNode->m_pNext = newNode;
}
void List::Show()
{
	for (ListNode *current = pListHead; current; current = current->m_pNext)
	{
		cout << current->m_nValue;
		if (current->m_pNext)cout << "->";
	}
	cout << endl;
}

int main03()
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

	pList->DeleteNode(&node2);
	pList->Show();
	return 0;
}
#include<iostream>
#include<cmath>
using namespace std;

struct ListNode
{
	int m_nValue;
	ListNode *m_pNext;
	ListNode(char x) :m_nValue(x), m_pNext(NULL) {}
};
class List 
{
public:
	ListNode* deleteDuplication()
	{
		if (pHead == NULL)
			return NULL;
		ListNode *pPreNode = NULL;
		ListNode *pNode = pHead;
		while (pNode != NULL)
		{
			ListNode *pNext = pNode->m_pNext;
			bool needDelete = false;
			if (pNext != NULL && pNext->m_nValue == pNode->m_nValue)
				needDelete = true;
			if (!needDelete)
			{
				pPreNode = pNode;
				pNode = pNode->m_pNext;
			}
			else
			{
				int value = pNode->m_nValue;
				ListNode *pToBeDel = pNode;
				while (pToBeDel != NULL && pToBeDel->m_nValue == value)
				{
					pNext = pToBeDel->m_pNext;
					delete pToBeDel;
					pToBeDel = NULL;
					pToBeDel = pNext;
				}
				if (pPreNode == NULL)
					pHead = pNext;
				else
					pPreNode->m_pNext = pNext;
				pNode = pNext;
			}
		}
		return pHead;
	}
	List() { pHead = new ListNode(NULL); pHead->m_pNext = NULL; }
	void ListInsert(ListNode *pNode);//´ÓÎ²²åÈë
	void Show();
	ListNode *pHead;
};

void List::ListInsert(ListNode *pNode)
{
	ListNode *currentNode = pHead;
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
	for (ListNode *current = pHead; current; current = current->m_pNext)
	{
		cout << current->m_nValue;
		if (current->m_pNext)cout << "->";
	}
	cout << endl;
}

int main()
{
	ListNode node1(1);
	ListNode node2(2);
	ListNode node3(3);
	ListNode node4(3);
	ListNode node5(4);
	ListNode node6(4);
	ListNode node7(5);

	List *pList = new List();
	pList->pHead = &node1;
	pList->ListInsert(&node2);
	pList->ListInsert(&node3);
	pList->ListInsert(&node4);
	pList->ListInsert(&node5);
	pList->ListInsert(&node6);
	pList->ListInsert(&node7);
	pList->Show();

	pList->pHead = pList->deleteDuplication();
	pList->Show();
	return 0;
}
#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :val(x), next(NULL) {}
};
class Solution {
public:
	ListNode* deleteDuplication(ListNode* pHead)
	{
		if (pHead == NULL)
			return NULL;
		ListNode *pCurrent = pHead;
		ListNode *pPre = NULL;
		while (pCurrent != NULL)
		{
			ListNode *pNext = pCurrent->next;
			
		}
		return pPre;
	}
	Solution() { pHead = new ListNode(NULL); pHead->next = NULL; }
	void ListInsert(ListNode *pNode);//´ÓÎ²²åÈë
	void Show();
	ListNode *pHead;
};

void Solution::ListInsert(ListNode *pNode)
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
void Solution::Show()
{
	for (ListNode *current = pHead; current; current = current->next)
	{
		cout << current->val;
		if (current->next)cout << "->";
	}
	cout << endl;
}

int mainTest()
{
	ListNode node1(1);
	ListNode node2(2);
	ListNode node3(3);
	ListNode node4(3);
	ListNode node5(4);
	ListNode node6(4);
	ListNode node7(5);

	Solution *pList = new Solution();
	pList->pHead = &node1;
	pList->ListInsert(&node2);
	pList->ListInsert(&node3);
	pList->ListInsert(&node4);
	pList->ListInsert(&node5);
	pList->ListInsert(&node6);
	pList->ListInsert(&node7);
	pList->Show();

	pList->pHead = pList->deleteDuplication(pList->pHead);
	pList->Show();
	return 0;
}
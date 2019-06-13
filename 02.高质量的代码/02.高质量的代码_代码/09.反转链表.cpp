#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

struct ListNode 
{
	int val;
	struct ListNode *next;
	ListNode(int x) :val(x), next(NULL) {}
}; 
class Solution9 
{
public:
	ListNode* ReverseList(ListNode* pHead) 
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
};
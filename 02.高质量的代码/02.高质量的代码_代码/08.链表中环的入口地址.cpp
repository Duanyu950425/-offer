#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :val(x), next(NULL) {}
};
class Solution 
{
public:
	ListNode *MeetingNode(ListNode *pHead)
	{
		if (pHead == NULL)
			return NULL;
		ListNode *pSlow = pHead->next;
		if (pSlow == NULL)
			return NULL;
		ListNode *pFast = pSlow->next;
		while (pFast->next != NULL && pSlow->next != NULL)
		{
			if (pFast == pSlow)
				return pFast;
			pSlow = pSlow->next;
			pFast = pFast->next;
			if (pFast != NULL)
				pFast = pFast->next;
		}
		return NULL;
	}
	ListNode* EntryNodeOfLoop(ListNode* pHead)
	{
		ListNode *meetingNode = MeetingNode(pHead);
		if (meetingNode == NULL)
			return NULL;
		int nodeInLoop = 1;
		ListNode *pNode1 = meetingNode;
		while (pNode1->next != meetingNode)
		{
			pNode1 = pNode1->next;
			++nodeInLoop;
		}
		pNode1 = pHead;
		for (int i = 0; i < nodeInLoop; ++i)
			pNode1 = pNode1->next;
		ListNode *pNode2 = pHead;
		while (pNode1 != pNode2)
		{
			pNode1 = pNode1->next;
			pNode2 = pNode2->next;
		}
		return pNode1;
	}
};
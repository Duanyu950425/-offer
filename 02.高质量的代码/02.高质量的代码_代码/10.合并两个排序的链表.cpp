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
class Solution10 
{
public:
	ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
	{
		if (pHead1 == NULL)
			return pHead2;
		else if (pHead2 == NULL)
			return pHead1;
		ListNode *pMergeNode = NULL;
		if (pHead1->val < pHead2->val)
		{
			pMergeNode = pHead1;
			pMergeNode->next = Merge(pHead1->next, pHead2);
		}
		else
		{
			pMergeNode = pHead2;
			pMergeNode->next = Merge(pHead1, pHead2->next);
		}
		return pMergeNode;
	}
};
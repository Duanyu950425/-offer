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
class Solution07
{
public:
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
};
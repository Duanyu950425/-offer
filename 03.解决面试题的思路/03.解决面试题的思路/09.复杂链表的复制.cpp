#include<iostream>
#include<list>
#include<vector>
using namespace std;

struct RandomListNode {
	int label;
	struct RandomListNode *next, *random;
	RandomListNode(int x) :label(x), next(NULL), random(NULL) {}
};
class Solution 
{
public:
	RandomListNode* Clone(RandomListNode* pHead)
	{
		if (pHead == NULL)
			return NULL;
		RandomListNode *current = pHead;
		while (current != NULL)//将节点复制，并直接连接在其复制节点之后
		{
			RandomListNode *pClone = new RandomListNode(current->label);
			pClone->next = current->next;
			current->next = pClone;
			current = pClone->next;
		}
		current = pHead;
		while (current != NULL)//复制节点的random指针指向的节点
		{
			RandomListNode *node = current->next;
			if (current->random != NULL)
				node->random = current->random->next;
			current = node->next;
		}
		RandomListNode *pCloneHead = pHead->next;
		RandomListNode *temp;
		current = pHead;
		while (current->next != NULL)
		{
			temp = current->next;
			current->next = temp->next;
			current = temp;
		}
		return pCloneHead;
	}
	RandomListNode *pHead;

	void PrintList(RandomListNode *pHead)
	{
		RandomListNode *current = pHead;
		while (current != NULL)
		{
			cout << current->label << "\t";
			current = current->next;
		}
		cout << endl;
	}
};

int main08()
{
	RandomListNode node1(1), node2(2), node3(3), node4(4), node5(5);
	Solution s;
	s.pHead = &node1;
	node1.next = &node2;
	node1.random = &node3;
	node2.next = &node3;
	node2.random = &node5;
	node3.next = &node4;
	node4.next = &node5;
	node4.random = &node2;

	s.Clone(s.pHead);
	s.PrintList(s.pHead);
	return 0;
}
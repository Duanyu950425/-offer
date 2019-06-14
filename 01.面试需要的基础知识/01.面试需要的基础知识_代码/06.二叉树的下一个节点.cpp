#include<iostream>
#include<vector>
#include<queue>
#include<stack>
using namespace std;

struct BinaryTreeNode {
	char val;
	BinaryTreeNode *m_pLeft;
	BinaryTreeNode *m_pRight;
	BinaryTreeNode *m_pParent;
};
class Tree
{
public:
	BinaryTreeNode *GetNext(BinaryTreeNode *pNode)//中序遍历的下一个节点
	{
		if (pNode == NULL)
			return NULL;
		BinaryTreeNode *pNext = NULL;
		if (pNode->m_pRight != NULL)
		{
			BinaryTreeNode *pRight = pNode->m_pRight;
			while (pRight->m_pLeft != NULL)
				pRight = pRight->m_pLeft;
			pNext = pRight;
		}
		else if (pNode->m_pParent != NULL)
		{
			BinaryTreeNode *pCurrent = pNode;
			BinaryTreeNode *pParent = pNode->m_pParent;
			while (pParent != NULL && pCurrent == pParent->m_pRight)
			{
				pCurrent = pParent;
				pParent = pCurrent->m_pParent;
			}
			pNext = pParent;
		}
		return pNext;
	}
	BinaryTreeNode *Root;
};

int main06()
{
	BinaryTreeNode node1, node2, node3, node4, node5, node6, node7, node8, node9;
	node1.val = 'a';
	node2.val = 'b';
	node3.val = 'c';
	node4.val = 'd';
	node5.val = 'e';
	node6.val = 'f';
	node7.val = 'g';
	node8.val = 'h';
	node9.val = 'i';
	Tree t;
	t.Root = &node1;
	node1.m_pLeft = &node2;
	node1.m_pRight = &node3;
	node2.m_pParent = &node1;
	node2.m_pLeft = &node4;
	node2.m_pRight = &node5;
	node3.m_pParent = &node1;
	node3.m_pLeft = &node6;
	node3.m_pRight  = &node7;
	node4.m_pParent = &node2;
	node4.m_pLeft = NULL;
	node4.m_pRight = NULL;
	node5.m_pParent = &node2;
	node5.m_pLeft = &node8;
	node5.m_pRight = &node9;
	node6.m_pParent = &node3;
	node6.m_pLeft = NULL;
	node6.m_pRight = NULL;
	node7.m_pParent = &node3;
	node7.m_pLeft = NULL;
	node7.m_pRight = NULL;
	node8.m_pParent = &node5;
	node8.m_pLeft = NULL;
	node8.m_pRight = NULL;
	node9.m_pParent = &node5;
	node9.m_pLeft = NULL;
	node9.m_pRight = NULL;
	cout << t.GetNext(&node9)->val << endl;
	return 0;
}
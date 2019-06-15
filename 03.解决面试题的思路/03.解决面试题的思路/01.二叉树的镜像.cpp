#include<iostream>
#include<vector>
#include<queue>
using namespace std;

struct TreeNode
{
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :val(x), left(NULL), right(NULL) {}
};

class Tree
{
public:

public:
	void LevelOrder()
	{
		queue<TreeNode *> q;
		TreeNode *currentNode = pRoot;
		while (currentNode)
		{
			cout << currentNode->val << " ";
			if (currentNode->left) q.push(currentNode->left);
			if (currentNode->right) q.push(currentNode->right);
			if (q.empty())return;
			currentNode = q.front();
			q.pop();
		}
	}
	void Mirror(TreeNode *pRoot)
	{
		if (pRoot == NULL)
			return;
		if (pRoot->left == NULL && pRoot->right == NULL)
			return;
		TreeNode *pTemp = pRoot->left;
		pRoot->left = pRoot->right;
		pRoot->right = pTemp;
		if (pRoot->left)
			Mirror(pRoot->left);
		if (pRoot->right)
			Mirror(pRoot->right);
	}
	TreeNode *pRoot;
};


int main01()
{
	TreeNode node1(8), node2(6), node3(10), node4(5), node5(7), node6(9), node7(11);
	Tree t;
	t.pRoot = &node1;
	node1.left = &node2;
	node1.right = &node3;
	node2.left = &node4;
	node2.right = &node5;
	node3.left = &node6;
	node3.right = &node7;

	t.LevelOrder();
	cout << endl;

	t.Mirror(t.pRoot);
	t.LevelOrder();
	
	return 0;
}
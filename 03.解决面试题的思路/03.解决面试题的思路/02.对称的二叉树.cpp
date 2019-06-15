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
class Tree2
{
public:
	bool isSymmetrical(TreeNode* pRoot)
	{
		return isSymmetrical(pRoot, pRoot);
	}
	bool isSymmetrical(TreeNode* pRoot1, TreeNode* pRoot2)
	{
		if (pRoot1 == NULL && pRoot2 == NULL)
			return true;
		if (pRoot1 == NULL || pRoot2 == NULL)
			return false;
		if (pRoot1->val != pRoot2->val)
			return false;
		return isSymmetrical(pRoot1->left, pRoot2->right) && isSymmetrical(pRoot1->right, pRoot2->left);
	}
	TreeNode *pRoot;
};
int main02()
{
	TreeNode node1(8), node2(6), node3(6), node4(5), node5(7), node6(7), node7(5);
	Tree2 t;
	t.pRoot = &node1;
	node1.left = &node2;
	node1.right = &node3;
	node2.left = &node4;
	node2.right = &node5;
	node3.left = &node6;
	node3.right = &node7;

	cout << boolalpha << t.isSymmetrical(t.pRoot) << endl;
	return 0;
}
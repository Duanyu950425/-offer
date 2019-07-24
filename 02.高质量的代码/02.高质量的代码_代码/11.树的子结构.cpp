#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

struct TreeNode 
{
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :val(x), left(NULL), right(NULL) {}
}; 
class Solution11
{
public:
	bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
	{
		bool result = false;
		if (pRoot1 != NULL && pRoot2 != NULL)
		{
			if (pRoot1->val == pRoot2->val)
				result = DoesTree1HasTree2(pRoot1, pRoot2);
			if (!result)
				result = DoesTree1HasTree2(pRoot1->left, pRoot2);
			if (!result)
				result = DoesTree1HasTree2(pRoot1->right, pRoot2);
		}
		return result;
	}
	bool DoesTree1HasTree2(TreeNode* pRoot1, TreeNode* pRoot2)
	{
		if (pRoot2 == NULL)
			return true;
		if (pRoot1 == NULL)
			return false;
		if (pRoot1->val != pRoot2->val)
			return false;
		return DoesTree1HasTree2(pRoot1->left, pRoot2->left) && DoesTree1HasTree2(pRoot1->right, pRoot2->right);
	}
	TreeNode *pRoot1;
	TreeNode *pRoot2;
};

int main()
{
	Solution11 t;
	TreeNode node11(8), node12(6), node13(10), node14(5), node15(7), node16(9), node17(11);
	t.pRoot1 = &node11;
	node11.left = &node12;
	node11.right = &node13;
	node12.left = &node14;
	node12.right = &node15;
	node13.left = &node16;
	node13.right = &node17;

	TreeNode node21(10), node22(9), node23(11);
	t.pRoot2 = &node21;
	node21.left = &node22;
	node21.right = &node23;
	
	cout << boolalpha << t.HasSubtree(t.pRoot1, t.pRoot2) << endl;;
	return 0;
}
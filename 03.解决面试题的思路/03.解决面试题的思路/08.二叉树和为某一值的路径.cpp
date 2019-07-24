#include<iostream>
#include<vector>
using namespace std;

struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :val(x), left(NULL), right(NULL) {}
}; 
class Solution 
{
public:
	vector<vector<int>> ret;
	vector<int> path;
	vector<vector<int> > FindPath(TreeNode* root, int expectNumber) {
		find(root, expectNumber);
		return ret;
	}
	void find(TreeNode* root, int expectNumber)
	{
		if (root == NULL)
			return;
		path.push_back(root->val);
		if (root->left == NULL && root->right == NULL && expectNumber == root->val)
			ret.push_back(path);
		else {
			if (root->left != NULL)
				find(root->left, expectNumber - root->val);
			if (root->right != NULL)
				find(root->right, expectNumber - root->val);
		}
		path.pop_back();
	}
	TreeNode *root;
};

int main08()//////牛客网可以通过，但实际运行会中断
{
	TreeNode node1(10), node2(5), node3(12), node4(4), node5(7);
	Solution s;
	s.root = &node1;
	node1.left = &node2;
	node1.right = &node3;
	node2.left = &node4;
	node2.right = &node5;

	int Number;
	cin >> Number;
	s.FindPath(s.root, Number);
	//int columns = s.ret[0].size();
	//int rows = s.ret.size();
	//cout << columns << '\t' << rows << endl;
		
	return 0;
}
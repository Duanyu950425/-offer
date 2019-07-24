#include<iostream>
#include<vector>
#include<queue>
#include<stack>
using namespace std;

struct TreeNode 
{
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :val(x), left(NULL), right(NULL) {}
}; 
class Solution 
{
public:
	vector<int> PrintFromTopToBottom(TreeNode* root) 
	{
		vector<int> v;
		if (root == NULL)
			return v;
		queue<TreeNode *> q;
		q.push(root);
		while (!q.empty())
		{
			TreeNode *temp = q.front();
			q.pop();
			v.push_back(temp->val);
			if (NULL != temp->left)
				q.push(temp->left);
			if (NULL != temp->right)
				q.push(temp->right);
		}
		return v;
	}
	
	TreeNode *root;
};

int main06()
{
	TreeNode node1(8), node2(6), node3(10), node4(5), node5(7), node6(9), node7(11);
	Solution s;
	s.root = &node1;
	node1.left = &node2;
	node1.right = &node3;
	node2.left = &node4;
	node2.right = &node5;
	node3.left = &node6;
	node3.right = &node7;

	vector<int> v;
	v = s.PrintFromTopToBottom(s.root);
	vector<int>::iterator it = v.begin();
	for (; it != v.end(); it++)
		cout << *it << " ";
	cout << endl;
	return 0;
}
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
	vector<vector<int>> vec;
	vector<int> c;
	vector<vector<int> > Print(TreeNode* pRoot) 
	{
		
		if (pRoot == NULL)
			return vec;
		queue<TreeNode *> q;
		q.push(pRoot);
		while (!q.empty())
		{
			int lo = 0, hi = q.size();
			
			while (lo++ < hi)
			{
				TreeNode *t = q.front();
				q.pop();
				c.push_back(t->val);
				if (t->left)q.push(t->left);
				if (t->right)q.push(t->right);
			}
			vec.push_back(c);
		}
		return vec;
	}
	TreeNode* pRoot;
};

int main06_2()
{
	TreeNode node1(8), node2(6), node3(10), node4(5), node5(7), node6(9), node7(11);
	Solution s;
	s.pRoot = &node1;
	node1.left = &node2;
	node1.right = &node3;
	node2.left = &node4;
	node2.right = &node5;
	node3.left = &node6;
	node3.right = &node7;

	s.Print(s.pRoot);

	return 0;
}
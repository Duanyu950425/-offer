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
	vector<vector<int> > Print(TreeNode* pRoot) 
	{
		vector<vector<int>> vec;
		if (pRoot == NULL)
			return vec;
		vector<TreeNode *> q1, q2;
		q1.push_back(pRoot);
		bool model = true;//true表示方向从左到右
		while (!q1.empty())
		{
			q2 = q1;
			q1.clear();
			vector<int> row;
			while (!q2.empty())
			{
				TreeNode *temp = q2.back();
				q2.pop_back();
				row.push_back(temp->val);
				if (model == true)
				{
					if (temp->left) q1.push_back(temp->left);
					if (temp->right) q1.push_back(temp->right);
				}
				else
				{
					if (temp->right) q1.push_back(temp->right);
					if (temp->left) q1.push_back(temp->left);
				}
			}
			model = !model;
			vec.push_back(row);
		}
		return vec;

	}

};
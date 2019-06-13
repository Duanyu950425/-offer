#include<iostream>
#include<vector>
#include<stack>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution 
{
public:
	TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> vin) 
	{
		int length = vin.size();
		if (length == 0)
			return NULL;
		TreeNode *head = new TreeNode(pre[0]);
		vector<int> left_in, left_pre, right_in, right_pre;
		int gen = 0;
		for (int i = 0; i < length; i++)
		{
			if (vin[i] == pre[0])
			{
				gen = i;
				break;
			}
		}
		for (int i = 0; i < gen; i++)
		{
			left_pre.push_back(pre[i + 1]);
			left_in.push_back(vin[i]);
		}
		for (int i = gen + 1; i < length; i++)
		{
			right_pre.push_back(pre[i]);
			right_in.push_back(vin[i]);
		}
		head->left = reConstructBinaryTree(left_pre, left_in);
		head->right = reConstructBinaryTree(right_pre, right_in);
		return head;
	}
};
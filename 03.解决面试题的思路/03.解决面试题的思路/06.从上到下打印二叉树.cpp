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
	}
};
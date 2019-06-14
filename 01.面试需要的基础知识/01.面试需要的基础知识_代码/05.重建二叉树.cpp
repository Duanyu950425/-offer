#include<iostream>
#include<vector>
#include<queue>
#include<stack>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Tree 
{
public:
	void LevelOrder()
	{
		queue<TreeNode *> q;
		TreeNode *current = pRoot;
		while (current)
		{
			cout << current->val << " ";
			if (current->left)q.push(current->left);
			if (current->right) q.push(current->right);
			if (q.empty())return;
			current = q.front();
			q.pop();
		}
	}
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

	TreeNode *pRoot;
};
int main()
{
	vector<int> vPre, vIn;
	vPre.push_back(1);
	vPre.push_back(2);
	vPre.push_back(4);
	vPre.push_back(7);
	vPre.push_back(3);
	vPre.push_back(5);
	vPre.push_back(6);
	vPre.push_back(8);

	vIn.push_back(4);
	vIn.push_back(7);
	vIn.push_back(2);
	vIn.push_back(1);
	vIn.push_back(5);
	vIn.push_back(3);
	vIn.push_back(8);
	vIn.push_back(6);
	Tree t;
	t.pRoot = t.reConstructBinaryTree(vPre, vIn);
	t.LevelOrder();
	return 0;
}
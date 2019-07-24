#include<iostream>
#include<vector>
#include<stack>
using namespace std;

struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :val(x), next(NULL) {}
};

class Solution
{
public:
	int minNumberInRotateArray(vector<int> rotateArray) {
		int length = rotateArray.size();
		if (length == 0)
			return 0;
		int min;
		for (int i = 1; i < length; i++)
		{
			for (int j = 0; i < i; j++)
			{
				if (rotateArray[j] < rotateArray[i])
				{
					min = rotateArray[j];
					break;
				}
			}
		}
		return min;
	}
};

int mainTest()
{
	Solution s;
	vector<int> v;
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(1);

	cout << s.minNumberInRotateArray(v) << endl;
	return 0;
}
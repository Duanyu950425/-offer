#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Solution9
{
public:
	int minNumberInRotateArray(vector<int> rotateArray)
	{
		int size = rotateArray.size();
		if (size == 0)
			return 0;
		int left = 0;
		int right = size - 1;
		int mid = 0;
		while (rotateArray[left] >= rotateArray[right])
		{
			if (right - left == 1)
			{
				mid = right;
				break;
			}
			mid = left + (right - left) / 2;
			if (rotateArray[left] == rotateArray[right] && rotateArray[left] == rotateArray[mid])
			{
				return MinOrder(rotateArray, left, right);
			}
			else if (rotateArray[mid] >= rotateArray[left])
				left = mid;
			else
				right = mid;
		}
		return rotateArray[mid];
	}
	int MinOrder(vector<int> rotateArray, int left, int right)
	{
		int val = rotateArray[left];
		for (int i = left + 1; i <= right; i++)
		{
			if (rotateArray[i] < val)
				val = rotateArray[i];
		}
		return val;
	}
};

int main09()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(1);
	v.push_back(1);
	v.push_back(1);
	Solution9 s;
	cout << s.minNumberInRotateArray(v) << endl;
	return 0;
}
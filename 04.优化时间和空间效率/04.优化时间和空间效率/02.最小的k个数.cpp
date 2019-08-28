#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution 
{
public:
	vector<int> GetLeastNumbers_Solution(vector<int> input, int k) 
	{
		vector<int> v;
		int size = input.size();
		if (size == 0 || k <= 0 || k > size)
			return v;
		sort(input.begin(), input.end());
		for (int i = 0; i < k; i++)
			v.push_back(input[i]);
		return v;
	}
};

int main()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(5);
	v.push_back(3);
	v.push_back(7);
	v.push_back(11);
	v.push_back(9);
	v.push_back(6);
	v.push_back(4);
	v.push_back(3);
	v.push_back(2);
	v.push_back(10);
	v.push_back(1);

	int k;
	cin >> k;
	Solution s;
	vector<int> res;
	res = s.GetLeastNumbers_Solution(v, k);

	vector<int>::iterator it = res.begin();
	for (; it != res.end(); it++)
		cout << *it << " ";
	cout << endl;

	return 0;
}
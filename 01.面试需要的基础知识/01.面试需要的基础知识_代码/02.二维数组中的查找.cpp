#include<iostream>
#include<vector>
using namespace std;

class Solution2 
{
public:
	bool Find(int target, vector<vector<int> > array)
	{
		int rows = array.size();
		int cols = array[0].size();
		int i = 0, j = cols - 1;
		while (i < rows && j >= 0)
		{
			if (target < array[i][j])
				j--;
			else if (target > array[i][j])
				i++;
			else
				return true;
		}
		return false;
	}
};
int main02()
{
	int target = 4;
	vector<vector<int>> v;
	v = { {1,2,8,9}, {2,4,9,12}, {4,7,10,13}, {6,8,11,15} };
	Solution2 s;
	cout << boolalpha << s.Find(target, v) << endl;
	return 0;
}
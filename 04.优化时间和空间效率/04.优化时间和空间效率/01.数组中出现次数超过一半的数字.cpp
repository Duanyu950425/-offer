#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution 
{
public:
	int MoreThanHalfNum_Solution(vector<int> numbers) 
	{
		int size = numbers.size();
		if (size == 0)
			return 0;
		sort(numbers.begin(), numbers.end());
		int middle = numbers[size / 2];
		int count = 0;
		for (int i = 0; i < size; i++)
			if (middle = numbers[i])
				count++;
		if (count > size / 2)
			return numbers[size / 2];
		else
			return 0;
		
	}
};

int main01()
{
	vector<int> n;
	n.push_back(1);
	n.push_back(2);
	n.push_back(3);
	n.push_back(2);
	n.push_back(2);
	n.push_back(2);
	n.push_back(5);
	n.push_back(4);
	n.push_back(2);

	Solution s;
	cout << s.MoreThanHalfNum_Solution(n) << endl;
	return 0;
}
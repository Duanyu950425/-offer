#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

class Solution6
{
public:
	void reOrderArray(vector<int> &array) 
	{
		int size = array.size();
		if (size == 0)
			return;
		int oddCount = 0;
		int *aux = new int[size];
		for (int i = 0; i < size; i++)
		{
			aux[i] = array[i];
			if (aux[i] % 2 != 0)
				oddCount++;
		}
		int i = 0;
		int left = 0;
		int mid = oddCount;
		while (left <= mid && i < size)
		{
			if (aux[i] % 2 == 0)
			{
				array[mid] = aux[i];
				i++;
				mid++;
			}
			else
			{
				array[left] = aux[i];
				i++;
				left++;
			}
		}
	}
};

int main06()
{
	Solution6 s;
	vector<int> v;
	v.push_back(2);
	v.push_back(3);
	v.push_back(1);
	v.push_back(6);
	v.push_back(7);
	v.push_back(9);
	v.push_back(10);
	v.push_back(12);
	s.reOrderArray(v);
	vector<int>::iterator it = v.begin();
	for (; it != v.end(); it++)
		cout << *it << " ";
	cout << endl;
	return 0;
}
#include<iostream>
using namespace std;

class solution1
{
public:
	//通过排序找到数组中重复的数字
	void BySortingNum(int number[], int length)
	{
		if (number == NULL || length <= 0)
			return;
		for (int i = 0; i < length - 1; i++)
		{
			if (number[i] < 0 || number[i] > length - 1)
				return;
		}
		for (int i = 0; i < length; ++i)
		{
			while (number[i] != i)
			{
				if (number[i] == number[number[i]])
				{
					cout << number[i] << endl;
					return;
				}
				int temp = number[i];
				number[i] = number[temp];
				number[temp] = temp;
			}
		}
	}
	//不修改数组找到重复的数字
	int ByBinarySearch(int number[], int length)
	{
		if (number == NULL || length <= 0)
			return 0;
		int start = 1;
		int end = length - 1;
		while (end >= start)
		{
			int middle = ((end - start) >> 1) + start;
			int count = countRange(number, length, start, middle);
			if (end == start)
			{
				if (count > 1)
					return start;
				else
					break;
			}
			if (count > middle - start + 1)
				end = middle;
			else
				start = middle + 1;
		}
		return -1;
	}
	int countRange(int number[], int length, int start, int end)
	{
		if (number == NULL)
			return 0;
		int count = 0;
		for (int i = 0; i < length; i++)
			if (number[i] >= start && number[i] <= end)
				++count;
		return count;
	}
};
int main01()
{
	int a[] = { 2,3,5,4,3,2,6,7 };
	int n = 8;
	solution1 s;
	//s.BySortingNum(a, n);
	cout << s.ByBinarySearch(a, n) << endl;
	return 0;
}
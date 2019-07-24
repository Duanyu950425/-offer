#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	bool VerifySquenceOfBST(vector<int> sequence) {
		int size = sequence.size();
		if (0 == size)
			return false;
		int root = sequence[size - 1];//���һ���Ǹ����

		vector<int> SeqLeft;
		vector<int> SeqRight;

		//�ڶ������������������ڵ��ֵС�ڸ�����ֵ
		int i = 0;
		for (; i < size - 1; i++)
		{
			if (sequence[i] > root)
				break;
			SeqLeft.push_back(sequence[i]);
		}

		int j = i;
		for (; j < size - 1; j++)
		{
			if (sequence[j] < root)
				return false;
			SeqRight.push_back(sequence[j]);
		}

		//�ж��������ǲ��Ƕ���������
		bool left = true;
		if (i > 0)
			left = VerifySquenceOfBST(SeqLeft);

		bool right = true;
		if (i < size - 1)
			right = VerifySquenceOfBST(SeqRight);

		return (left&&right);
	}
};

int main07()
{
	Solution s;
	vector<int> v;
	v.push_back(2);
	v.push_back(9);
	v.push_back(5);
	v.push_back(16);
	v.push_back(17);
	v.push_back(15);
	v.push_back(19);
	v.push_back(18);
	v.push_back(12);

	cout << boolalpha << s.VerifySquenceOfBST(v) << endl;
	return 0;
}
#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int Fibonacci_Recur(int n)//µÝ¹é
{
	if (n < 0)
		return -1;
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	return Fibonacci_Recur(n - 2) + Fibonacci_Recur(n - 1);
}
int Fibonacci_Itera(int n)
{
	if (n < 0)
		return -1;
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	int num0 = 0, num1 = 1;
	int sum;
	for (int i = 2; i <= n; i++)
	{
		sum = num0 + num1;
		num0 = num1;
		num1 = sum;
	}
	return sum;
}
//±äÌ¬ÇàÍÜÌø
int jumpFloorII(int number)
{
	if (number <= 0)
		return 0;
	if (number == 1)
		return 1;
	int val = 1;
	for (int i = 2; i <= number; i++)
	{
		val *= 2;
	}
	return val;
}
int main08()
{
	int n;
	cin >> n;
	cout << Fibonacci_Recur(n) << endl;
	cout << Fibonacci_Itera(n) << endl;
	cout << jumpFloorII(n) << endl;
	return 0;
}
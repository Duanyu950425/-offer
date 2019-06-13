#include<iostream>
#include<cmath>
using namespace std;

class Solution1 
{
public:
	bool g_InvalidInput = false;
	double Power(double base, int exponent) 
	{
		g_InvalidInput = false;
		if (equal(base, 0.0) && exponent < 0)
		{
			g_InvalidInput = true;
			return 0.0;
		}
		unsigned int absExponent = (unsigned int)(exponent);
		if (exponent < 0)
			absExponent = (unsigned int)(-exponent);
		double result = PowerWithUnsignedExponent(base, absExponent);
		if (exponent < 0)
			result = 1.0 / result;
		return result;
	}
	double PowerWithUnsignedExponent(double base, int exponent)
	{
		double result = 1.0;
		for (int i = 1; i <= exponent; ++i)
		{
			result *= base;
		}
		return result;
	}
	bool equal(double base, double value)
	{
		double result = base - value;
		if (result >= -0.000001 && result < 0.00001)
			return true;
		return false;
	}
};
int main01()
{
	Solution1 s;
	double base;
	cin >> base;
	int exponent;
	cin >> exponent;
	cout << s.Power(base, exponent) << endl;
	return 0;
}
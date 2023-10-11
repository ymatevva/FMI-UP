#include<iostream>
#include<cmath>

int myPow(int base, int exponent)
{
	int result = 1;
	for (int i = 1; i <= exponent; i++)
	{
		result *= base;
	}
	return result;
}

int main()
{
	int a, b, c, d, e;
	std::cin >> a >> b >> c >> d >> e;

	for (int x = -100; x <= 100; x++)
	{
		if ((a * myPow(x, 4) + b * myPow(x, 3) + c * myPow(x, 2) + d * x + e ) >= 0)
		{
			std::cout << x << " ";
		}
	}

	return 0;
}
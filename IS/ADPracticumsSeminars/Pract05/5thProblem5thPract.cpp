#include<iostream>

int GCD(int a, int b)
{
	while (b != 0)
	{
		int temp = a;
		a = b;
		b = temp % b;
	}
	return a;
}
void shorten(int& a, int& b)
{
	int i = 2;
	while (GCD(a, b) != 1)
	{
		if (a%i == 0 && b%i == 0)
		{
			a /= i;
			b /= i;
		}
		else
			i++;
	}
}
int main()
{
	int numerator, divisor = 0;
	std::cin >> numerator >> divisor;
	shorten(numerator, divisor);
	std::cout << numerator << " " << divisor << std::endl;

	return 0;
}
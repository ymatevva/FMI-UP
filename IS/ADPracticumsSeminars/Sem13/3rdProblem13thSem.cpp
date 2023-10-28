#include<iostream>

int pow(int base, int exponent)
{
	if (exponent == 0)
		return 1;

	return base * pow(base,exponent - 1);
}
int main()
{
	int base, exponent;
	std::cin >> base >> exponent;

	std::cout << pow(base, exponent);
	return 0;
}
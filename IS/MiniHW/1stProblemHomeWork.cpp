#include<iostream>
void shortenFractions(int& numerator, int& denominator)
{
	int i = 1;
	while (numerator % i == 0 && denominator % i == 0)
	{
		numerator /= i;
		denominator /= i;
		i++;
	}
}
int main()
{
	int numerator, denominator;
	std::cin >> numerator >> denominator;
	shortenFractions(numerator, denominator);

	std::cout << numerator << " " << denominator << std::endl;

	return 0;
}
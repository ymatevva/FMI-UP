#include<iostream>
#include<cmath>

bool isPrime(unsigned int n)
{
	if (n <= 1)
		return false;

	double temp = sqrt(n);

	for (size_t i = 2; i <= temp; i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}

unsigned int countDivisors(unsigned int n)
{
	unsigned int count = 0;

	for (size_t i = 2; i < n; i++)
	{
		if (n % i == 0)
			count++;
	}
	return count;
}
void printNumbers(int a, int b)
{
	for (size_t i = a; i <= b; i++)
	{
		if (isPrime(countDivisors(i)))
			std::cout << i << " ";
	}
}
int main()
{
	int a, b;
	std::cin >> a >> b;

	printNumbers(a, b);

	return 0;
}
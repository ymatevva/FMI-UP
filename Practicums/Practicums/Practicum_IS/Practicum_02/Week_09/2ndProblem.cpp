#include<iostream>

unsigned int sumOfDivisorsSmallerThanN(unsigned int n)
{
	unsigned int sum = 0;
	for (size_t i = 1; i < n; i++)
	{
		if (n % i == 0)
			sum += i;
	}
	return sum;
}
bool isPerfect(unsigned int n)
{
	return n == sumOfDivisorsSmallerThanN(n);
}
int main()
{
	unsigned int n;
	std::cin >> n;

	std::cout << std::boolalpha << isPerfect(n);



	return 0;
}
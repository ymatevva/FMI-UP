#include<iostream>

unsigned int factor(unsigned int n)
{
	if (n == 0)
		return 1;

	return n * factor(n - 1);
}

int main()
{
	unsigned int n;
	std::cin >> n;

	std::cout << factor(n) << std::endl;

	return 0;
}
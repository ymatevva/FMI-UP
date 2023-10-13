#include<iostream>

int reverse(int number)
{
	int result = 0;
	while (number > 0)
	{
		result = result * 10 + number % 10;
		number /= 10;
	}
	return result;
}
int concatanateWithReversed(unsigned int n, unsigned int reversed)
{
	int newNum = 0;
	while (n > 0)
	{
		newNum = newNum * 10 + n % 10;
		n /= 10;
	}
	while (reversed > 0)
	{
		newNum = newNum * 10 + reversed % 10;
		reversed /= 10;
	}
	return newNum;
}
int main()
{
	unsigned int n;
	std::cin >> n;

	unsigned int reversedN = reverse(n);

	std :: cout << concatanateWithReversed(n, reversedN);










	return 0;
}
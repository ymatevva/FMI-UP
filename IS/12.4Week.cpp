#include<iostream>

bool isPrime(int number)
{
	if (number <=1)
	{
		return false;
	}

	for (size_t i = 2; i < number; i++)
	{
		if (number % i == 0)
		{
			return false;
		}
	}

	return true;
}
int main()
{
	int n;
	std::cin >> n;

	int count = 0;

	int i = 0;
	while (count < n)
	{
		if (isPrime(i))
		{
			count++;
			std::cout << i << " ";
		}
		i++;
	}











	return 0;
}
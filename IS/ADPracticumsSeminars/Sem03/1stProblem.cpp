#include<iostream>
#include<cmath>
bool isPrime(int number)
{
	if (number <= 1)
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
	int number;
	std::cin >> number;

	for (size_t i = 50; i >= 1; i--)
	{
		if (isPrime(i) && number % i == 0)
		{
			int exponent = 0;
			while (number % i == 0)
			{
				number /= i;
				exponent++;
			}
			if (exponent > 0)
			{
				std::cout << i << " ^ " << exponent << std::endl; exponent = 0;
			}
		}
	}



	return 0;
}
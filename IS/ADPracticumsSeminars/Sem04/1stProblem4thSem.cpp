#include<iostream>
bool isPrime(int number)
{
	if (number <= 1)
	{
		return false;
	}

	double temp = sqrt(number);
	for (size_t i = 2; i <= temp ; i++)
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
	if (n < 0)
	{
		std::cout << "Invalid input. Try again.";
		std::cin >> n;
	}


	for (size_t i = 6; i < n; i+=6)
	{
		if (isPrime(i-1) && isPrime(i+1))
		{
			std::cout << i-1 << " " << i+1 << std :: endl;
		}
	}



	return 0;
}
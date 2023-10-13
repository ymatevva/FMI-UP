#include<iostream>

bool prime(int number)
{
	if (number <= 1)
	{
		return false;
	}
	for (size_t i = 2; i < number; i++)
	{
		if (number % i == 0)
			return false;
	}
	return true;
}
int primeDivisors(int a, int b, int k)
{
	int kDivisors = 0;
	for (size_t i = a; i <= b ; i++)
	{
		int count = 0;
		
		for (size_t j= 2; j <= i; j++)
		{
			if (prime(j) && i % j == 0)
			{
				count++;
			}
		}
		if (count == k)
		{
			kDivisors++;
		}
	}
	return kDivisors;
}
int main()
{

	int a, b, k;
	std::cin >> a >> b >> k;


	std :: cout << primeDivisors(a, b, k);














	return 0;
}
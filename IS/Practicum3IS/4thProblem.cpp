#include<iostream>

int main()
{
	int number; 
	int sum = 0;
	while (std::cin >> number && number != 0)
	{
		sum += number;
	}

	std::cout << sum;

	return 0;
}
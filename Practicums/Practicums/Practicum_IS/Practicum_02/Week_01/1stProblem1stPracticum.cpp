#include<iostream>

int main()
{
	int number;
	std::cin >> number;

	int sum = 0;
	while (number > 0)
	{
		sum += number % 10;
		std::cout << number % 10 << std::endl;
		number /= 10;
	}

	std::cout << "The sum is: " << sum << std::endl;




	return 0;
}
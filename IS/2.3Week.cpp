#include<iostream>

int digitsCount(int number)
{
	int count = 0;

	while (number > 0)
	{
		count++;
		number /= 10;
	}

	return count;
}

int productFromDigits(int number)
{
	int product = 1;
	while (number > 0)
	{
		product *= number % 10;
		number /= 10;
	}

	return product;
}
int sumOfDigits(int number)
{
	int sum = 0;
	while (number > 0)
	{
		sum += number % 10;
		number /= 10;
	}
	return sum;
}
int main()
{

	int n;
	std::cin >> n;
	if (digitsCount(productFromDigits(n)) == 3)
	{
		std::cout << "Yes" << std::endl;
		std::cout << productFromDigits(n) - sumOfDigits(n) << std::endl;
	}
	else
	{
		std::cout << "No" << std::endl;
		std::cout << "The sum of digits is: " << sumOfDigits(n) << std::endl;
	}




	return 0;
}
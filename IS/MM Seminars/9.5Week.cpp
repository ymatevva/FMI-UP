#include<iostream>

int countDigits(int number)
{
	int count = 0;
	while (number > 0)
	{
		count++;
		number /= 10;
	}
	return count;
}

int sumDigits(int number)
{
	int sum = 0;
	while (number > 0)
	{
		sum += number % 10;
		number /= 10;
	}
	return sum;
}

int productDigits(int number)
{
	int product = 0;
	while (number > 0)
	{
		product *= number % 10;
		number /= 10;
	}
	return product;
}

int main()
{
	int A, B;
	std::cin >> A >> B;

	int count = 0;

	for (size_t i = A; i <= B; i++)
	{
		if (sumDigits(i)==productDigits(i))
		{
			count++;
		}
	}

	std::cout << count << std::endl;

	return 0;
}
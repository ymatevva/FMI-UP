#include<iostream>

bool isAscending(unsigned int number)
{
	while (number > 9)
	{
		int currDigit = number % 10;
		int prevDigit = (number / 10) % 10;

		if (currDigit < prevDigit)
			return false;

		number /= 10;
	}
	return true;
}

bool isInterestingNumber(unsigned int n)
{
	if (isAscending(n) || (n >= 0 && n <= 9))
		return  true;

	return false;
}

void interestingNumbers(const int arr[], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		if (isInterestingNumber(arr[i]))
			std::cout << "YES" << std::endl;
		else
			std::cout << "NO" << std::endl;
	}
}
int main()
{
	constexpr int MAX_SIZE = 1024;

	unsigned int N;
	std::cin >> N;

	int numbers[MAX_SIZE];

	for (size_t i = 0; i < N; i++)
	{
		std::cin >> numbers[i];
	}

	interestingNumbers(numbers, N);
	return 0;
}
#include<iostream>

unsigned int sumEven(const char arr[], size_t length)
{
	unsigned int sum = 0;
	for (size_t i = 0; i < length; i++)
	{
		if(i % 2 == 0)
		sum += int(arr[i]);
	}
	return sum;
}

unsigned int sumOdd(const char arr[], size_t length)
{
	unsigned int sum = 0;
	for (size_t i = 0; i < length; i++)
	{
		if (i % 2 != 0)
			sum += (int)arr[i];
	}
	return sum;
}

void compareSums(const char arr[], size_t size)
{
	unsigned int sumOfEvenPos = sumEven(arr, size);
	unsigned int sumOfOddPos = sumOdd(arr, size);

	unsigned int bigger = sumOfEvenPos > sumOfOddPos ? sumOfEvenPos : sumOfOddPos;
	unsigned int smaller = sumOfEvenPos < sumOfOddPos ? sumOfEvenPos : sumOfOddPos;

	if (bigger % smaller == 0)
		std::cout << "It is a divisor" << std::endl;
	else
		std::cout << "It is not a divisor" << std::endl;

}
int main()
{
	constexpr int SIZE = 1024;

	unsigned int n;
	std::cin >> n;

	char arr[SIZE];
	
	for (size_t i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	compareSums(arr, n);
	return 0;
}
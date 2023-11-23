#include<iostream>

unsigned int digitsMultiplied(unsigned int n)
{ 
	if (n == 0)
		return 0;

	unsigned int res = 1;
	while (n != 0)
	{
		res *= n % 10;
		n /= 10;
	}
	return res;
}

unsigned int countNumsWithProductDigitsOneDigit(const int arr[], size_t size)
{
	unsigned int count = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (digitsMultiplied(arr[i]) >= 0 && digitsMultiplied(arr[i]) <= 9)
			count++;
	}
	return count;
}
int main()
{
	constexpr int MAX_SIZE = 1024;

	unsigned int n;
	std::cin >> n;

	int arr[MAX_SIZE];

	for (size_t i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	std::cout << countNumsWithProductDigitsOneDigit(arr, n);
	return 0;
}
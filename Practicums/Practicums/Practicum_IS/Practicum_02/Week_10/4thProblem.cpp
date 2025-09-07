#include<iostream>

unsigned int oddOrEvenAreMore(const int* arr, size_t n)
{
	unsigned int odd = 0;
	unsigned int even = 0;

	for (size_t i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
			even++;
		if (arr[i] % 2 != 0)
			odd++;
	}
	
	if (odd > even)
		return 1;

	else if (even > odd)
		return 2;

	else
		return 0;
}

int main()
{
	unsigned int n;
	std::cin >> n;

	int* arr = new int[n];
	for (size_t i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	std::cout << oddOrEvenAreMore(arr, n);

	delete[] arr;

	return 0;
}
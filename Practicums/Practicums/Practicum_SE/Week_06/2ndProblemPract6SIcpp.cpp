#include<iostream>
constexpr int MAX_SIZE = 1024;

bool isAscending(int array[], int n)
{
	for (int i = 0; i < n-1; i++)
	{
		if (array[i] > array[i + 1])
			return false;
	}
	return true;
}

bool isDescending(int array[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		if (array[i] < array[i + 1])
			return false;
	}
	return true;
}

bool isSorted(int array[], int size)
{
	return isAscending(array, size) || isDescending(array, size);
}
int main()
{
	int n;
	std::cin >> n;

	int array[MAX_SIZE];

	for (int i = 0; i < n; i++)
	{
		std::cin >> array[i];
	}

	std :: cout << std :: boolalpha << isSorted(array, n);

	return 0;
}
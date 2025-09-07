#include<iostream>
constexpr int MAX_SIZE = 100;

void findMax(const int* arr, size_t n, int& maxEl);
int main()
{
	unsigned int n;
	std::cin >> n;

	int arr[MAX_SIZE];
	for (size_t i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	int maxEl = 0;

	findMax(arr, n, maxEl);

	std::cout << maxEl;


	return 0;
}

void findMax(const int* arr, size_t n, int& maxEl)
{
	int maxElement = arr[0];
	for (size_t i = 0; i < n; i++)
	{
		if (arr[i] > maxEl)
			maxElement = arr[i];
	}
	maxEl = maxElement;
}
#include<iostream>
const int MAX_SIZE = 60;
// for already sorted arrays

int binarySearch(const int* array, int n, int element)
{
	int left = 0;
	int right = n - 1;

	while (left <= right)
	{
		unsigned mid = left + (right - left) / 2;
		if (array[mid] == element)
			return mid;
		else if (array[mid] < mid)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return -1;
}
int main()
{
	int  n;
	std::cin >> n;
	int array[MAX_SIZE];

	for (size_t i = 0; i < n; i++)
	{
		std::cin >> array[i];
	}

	int element;
	std::cin >> element;

	std::cout << binarySearch(array, n, element) << std::endl;

	return 0;
}
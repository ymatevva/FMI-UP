#include<iostream>
const int MAX_SIZE = 50;
int findMissing(int arr[], int size)
{
	int left = 0;
	int right = size - 1;
	int smallestMissing = size;

	while (left <= right)
	{
		int mid = left + (right - left) / 2;

		if (arr[mid] == mid + arr[0])
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	return left + arr[0];
}

int main()
{
	int n;
	std::cin >> n;
	int array[MAX_SIZE];

	for (size_t i = 0; i < n; i++)
	{
		std::cin >> array[i];
	}

	std::cout << findMissing(array, n) << std::endl;

	return 0;
}
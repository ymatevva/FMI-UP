#include<iostream>
constexpr int MAX_SIZE = 100;

unsigned binarySearch(const int* arr, size_t length, int el)
{
	int left = 0;
	int rigth = length - 1;

	while (left <= rigth)
	{
		int mid = left + (rigth - left) / 2;

		if ((arr[mid] <= el && arr[mid + 1] >= el) || (arr[mid] <= el && mid + 1 == length))
			return mid+1;

		else if (arr[mid] > el)
			rigth = mid - 1;

		else 
			left = mid + 1;
	}
	return -1;
}
int main()
{
	unsigned int n;
	std::cin >> n;

	int arr[MAX_SIZE];
	for (size_t i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	int num;
	std::cin >> num;

	std::cout << binarySearch(arr, n, num);

	return 0;
}
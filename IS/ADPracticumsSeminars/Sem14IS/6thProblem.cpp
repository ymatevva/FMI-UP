#include<iostream>
constexpr int MAX_SIZE = 100;

bool binarySearch(const int* arr, size_t length, int element)
{
	if (length == 0)
		return false;

	int mid = length/2;

	if (arr[mid] == element)
		return true;

	if (arr[mid] > element)
		return binarySearch(arr,mid,element);

	if (arr[mid] < element)
		return binarySearch(arr + mid + 1, length - mid - 1, element);
}
int main()
{
	unsigned int n;
	std::cin >> n;

	int arr[MAX_SIZE];
	for (size_t i = 0; i < n; i++)
		std::cin >> arr[i];

	int el;
	std::cin >> el;

	std::cout << binarySearch(arr, n, el);
	return 0;
}
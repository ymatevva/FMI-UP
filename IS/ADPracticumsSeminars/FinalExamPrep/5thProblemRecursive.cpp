#include<iostream>
constexpr int MAX_SIZE = 100;

int binarySearchRec(const int* arr, size_t length, int el, int left,int rigth)
{
	if (!arr)
		return -1;

	if (left > rigth)
		return -1;

		int mid = left + (rigth - left) / 2;

		if ((arr[mid] <= el && arr[mid + 1] > el) || (arr[mid] <= el && mid + 1 == length))
			return mid + 1;

		if (arr[mid] >= el && mid - 1 <= 0)
			return 0;

		else if (arr[mid] > el)
			return binarySearchRec(arr,length,el,left, mid - 1);

		else
			return binarySearchRec(arr,length,el,mid + 1,rigth);
}
int binarySearch(const int* arr, size_t length, int el)
{
	if (!arr)
		return -1;

	return binarySearchRec(arr, length, el, 0, length-1);
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
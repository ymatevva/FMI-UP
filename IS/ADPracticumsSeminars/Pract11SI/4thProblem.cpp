#include<iostream>
constexpr int MAX_SIZE = 100;

unsigned int countSize(const int* arr, size_t length)
{
	if (!arr)
		return 0;

	unsigned int count = 0;

	for (size_t i = 1; i < length-1; i++)
	{
		if (arr[i] % arr[i - 1] == 0 || arr[i] % arr[i + 1] == 0)
			count++;
	}
	return count;
}
int* newArray(const int* arr, size_t length)
{
	if (!arr)
		return 0;

	size_t newSize = countSize(arr, length);

	int* newArray = new int[newSize];
	unsigned int newArrayInd = 0;

	for (size_t i = 1; i < length-1; i++)
	{
		if (arr[i] % arr[i - 1] == 0 || arr[i] % arr[i + 1] == 0)
			newArray[newArrayInd++] = arr[i];
	}

	return newArray;
	delete[] newArray;
}
int main()
{
	unsigned int n;
	std::cin >> n;

	int arr[MAX_SIZE];
	for (size_t i = 0; i < n; i++)
		std::cin >> arr[i];

	size_t newSize = countSize(arr, n);
	int* result = newArray(arr, n);

	for (size_t i = 0; i < newSize; i++)
	{
		std::cout << result[i] << " ";
	}

	delete[] result;
	return 0;
}
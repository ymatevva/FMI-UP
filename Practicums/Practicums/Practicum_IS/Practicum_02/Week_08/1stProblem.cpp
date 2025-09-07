#include<iostream>
constexpr int MAX_SIZE = 10;

void mergeArrays(const int arr1[], size_t size1, const int arr2[], size_t size2, int result[], size_t newSize)
{
	for (size_t i = 0; i < size1; i++)
		result[i] = arr1[i];
	
	for (size_t j = 0; j < size2; j++)
		result[j+size1] = arr2[j];
}
void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
void bubbleSort(int arr[], size_t length)
{
	for (size_t i = 0; i < length-1; i++)
	{
		bool isSwapped = false;

		for (size_t j = 0; j < length-i-1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
				isSwapped = true;
			}
		}
		if (!isSwapped)
				return;
	}
}

void print(const int arr[], size_t length)
{
	for (size_t i = 0; i < length; i++)
	{
		std::cout << arr[i] << " ";
	}
}
void mergeAndSort(const int arr1[], size_t size1, const int arr2[], size_t size2, int result[], size_t newSize)
{
	mergeArrays(arr1, size1, arr2, size2, result, newSize);
	bubbleSort(result, newSize);
	print(result, newSize);
}
void getInput(int arr1[], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		std::cin >> arr1[i];
	}
}
int main()
{
	unsigned int size1;
	std::cin >> size1;

	int arr1[MAX_SIZE];
	getInput(arr1, size1);

	unsigned int size2;
	std::cin >> size2;

	int arr2[MAX_SIZE];
	getInput(arr2, size2);

	unsigned int newSize = size1 + size2;

	int result[MAX_SIZE];

	mergeAndSort(arr1, size1, arr2, size2, result, newSize);

	return 0;
}
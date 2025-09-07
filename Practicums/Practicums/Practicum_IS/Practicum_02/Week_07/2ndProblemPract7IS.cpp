#include<iostream>
constexpr int MAX_SIZE = 1024;

int* newArr(const int arr[], size_t newSize)
{
	int* newArr = new int[newSize];

	for (size_t i = 0; i < newSize; i++)
	{
		newArr[i] = arr[i];
	}

	return newArr;
}

void print(const int arr[], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
}

int main()
{
	int n = 0;
	std::cin >> n;

	int arr[MAX_SIZE];

	for (size_t i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}
   
	int newSize = 0;
	std::cin >> newSize;

	int* newArray = newArr(arr, newSize);

	print(newArray, newSize);

	delete[] newArray;

	return 0;
}
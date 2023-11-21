#include<iostream>
constexpr int MAX_SIZE = 1024;

int* newArray(int* ptr , int& newSize, size_t size)
{
	newSize = size / 2;
	int* newArray = new int[newSize];

	for (size_t i = 0; i < newSize; i++)
	{
		newArray[i] = ptr[i];
	}

	return newArray;
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
	unsigned int n;
	std::cin >> n;

	int arr[MAX_SIZE];

	for (size_t i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	int* ptr = arr;

	int newSize = 0;

	int* newArr = newArray(ptr, newSize, n);
	print(newArr, newSize);

	delete[] newArr;

	return 0;
}
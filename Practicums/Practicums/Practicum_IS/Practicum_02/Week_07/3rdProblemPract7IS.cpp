#include<iostream>
constexpr int SIZE = 1024;

int* copyArray(const int arr[], size_t size)
{
	int* temp = new int[size];
	for (size_t i = 0; i < size; i++)
	{
		temp[i] = arr[i];
	}
	return temp;
}

void printArr(const int arr[], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
}
int main()
{
	
	int n;
	std::cin >> n;

	int arr[SIZE];

	for (size_t i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	int* newArr = copyArray(arr, n);
	printArr(newArr, n);
	return 0;
}
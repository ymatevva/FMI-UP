#include<iostream>
constexpr int MAX_SIZE = 10;

void rearrange(const int arr[], size_t size, int result[])
{
	int elPos = 0;
	for (int i = 0 ; i < size; i++)
	{
		if (arr[i] % 2 == 0)
			result[elPos++] = arr[i];
	}

	for (int j = size-1; j >= 0; j--)
	{
		if(arr[j] % 2 != 0)
        result[elPos++] = arr[j];
	}
		
}
void print(const int arr[], size_t length)
{
	for (size_t i = 0; i < length; i++)
	{
		std::cout << arr[i] << " ";
	}
}
void rearrangeAndSort(const int arr[], size_t size, int result[])
{
	rearrange(arr, size, result);
	print(result,size);
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
	unsigned int size;
	std::cin >> size;

	int arr[MAX_SIZE];
	getInput(arr, size);

	unsigned int newSize = size;

	int result[MAX_SIZE];

	rearrangeAndSort(arr, size, result);
	

	return 0;
}
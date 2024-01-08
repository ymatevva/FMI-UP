#include<iostream>
constexpr int MAX_SIZE = 100;
unsigned int countEven(const int* arr,size_t length)
{
	if (!arr)
		return 0;

	unsigned int count = 0;
	for (size_t i = 0; i < length; i++)
	{
		if (arr[i] % 2 == 0)
			count++;
	}
	return count;
}

int* onlyEven(const int* arr,size_t& newSize,size_t length)
{
	if (!arr)
		return 0;
	newSize = countEven(arr,length);
	int* newArr = new int[newSize];
	unsigned int newInd = 0;

	for (size_t i = 0; i < length; i++)
	{
		if (arr[i] % 2 == 0)
			newArr[newInd++] = arr[i];
	}

	return newArr;
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

	size_t length = 0;
	int* result = onlyEven(arr,length,n);
	for (size_t i = 0; i < length; i++)
	{
		std::cout << result[i] << " ";
	}

	delete[] result;
	return 0;
}
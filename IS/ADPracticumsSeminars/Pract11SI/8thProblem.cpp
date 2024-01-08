#include<iostream>
constexpr int MAX_SIZE = 100;

bool isInIt(const int* arr, size_t length , int element)
{
	if (!arr)
		return false;

	for (size_t i = 0; i < length; i++)
	{
		if (arr[i] == element)
			return true;
	}
	return false;
}

unsigned int countMutual(const int* arr1, size_t length1,const int* arr2,size_t length2)
{
	if (!arr1 || !arr2)
		return 0;

	unsigned int count = 0;
	for (size_t i = 0; i < length1; i++)
	{
		if (isInIt(arr2,length2, arr1[i]))
			count++;
	}
	return count;
}

int* mutualElements(const int* arr1, size_t length1, const int* arr2, size_t length2)
{
	if (!arr1 || !arr2)
		return 0;

	size_t newSize = countMutual(arr1, length1, arr2, length2);
	int* newArr = new int[newSize];
	unsigned int newInd = 0;

	for (size_t i = 0; i < length1; i++)
	{
		if (isInIt(arr2, length2, arr1[i]))
			newArr[newInd++] = arr1[i];
	}
	return newArr;
}
int main()
{
	unsigned int n1;
	std::cin >> n1;

	int arr1[MAX_SIZE];
	for (size_t i = 0; i < n1; i++)
	{
		std::cin >> arr1[i];
	}

	unsigned int n2;
	std::cin >> n2;

	int arr2[MAX_SIZE];
	for (size_t i = 0; i < n2; i++)
	{
		std::cin >> arr2[i];
	}
	
	size_t length = countMutual(arr1, n1, arr2, n2);
	int* res = mutualElements(arr1, n1, arr2, n2);
	for (size_t i = 0; i < length; i++)
	{
		std::cout << res[i] << " ";
	}

	delete[] res;
	return 0;
}
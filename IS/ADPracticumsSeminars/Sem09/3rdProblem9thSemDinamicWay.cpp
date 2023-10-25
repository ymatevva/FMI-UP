#include<iostream>
const int MAX_SIZE = 50;

void mergeArrays(int* array1, size_t n1, const int* array2, size_t n2)
{
	int* temp = new int[n1 + n2];

	int arr1Iter = 0, arr2Iter = 0, tempIter = 0;

	while (arr1Iter < n1 && arr2Iter < n2)
	{
		if (array1[arr1Iter] <= array2[arr2Iter])
			temp[tempIter++] = array1[arr1Iter++];
		else
			temp[tempIter++] = array2[arr2Iter++];
	}

	while (arr1Iter < n1)
		temp[tempIter++] = array1[arr1Iter++];

	while (arr2Iter < n2)
		temp[tempIter++] = array2[arr2Iter++];

	for (size_t i = 0; i < n1+n2; i++)
	{
		array1[i] = temp[i];
	}
	delete[] temp;
}
int main()
{

	int n1;
	std::cin >> n1;

	int array1[MAX_SIZE];

	for (size_t i = 0; i < n1; i++)
	{
		std::cin >> array1[i];
	}

	int n2;
	std::cin >> n2;

	int array2[MAX_SIZE];

	for (size_t i = 0; i < n2; i++)
	{
		std::cin >> array2[i];
	}

	mergeArrays(array1, n1, array2, n2);
	for (size_t i = 0; i < n1+n2; i++)
	{
		std::cout << array1[i] << " ";
	}

	return 0;
}
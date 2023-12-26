#include<iostream>
constexpr size_t MAX_SIZE = 100;

void merge(const int* arr1, size_t size1, const int* arr2, size_t size2, int* result)
{
	if (!arr1 || !arr2)
		return;

	unsigned int arr1Ind = 0;
	unsigned int arr2Ind = 0;
	unsigned int resInd = 0;

	while (arr1Ind < size1 && arr2Ind < size2)
	{
		if (arr1[arr1Ind] < arr2[arr2Ind])
			result[resInd++] = arr1[arr1Ind++];

		else
			result[resInd++] = arr2[arr2Ind++];
	}

	while(arr1Ind < size1)
		result[resInd++] = arr1[arr1Ind++];
	
	while (arr2Ind < size2)
		result[resInd++] = arr2[arr2Ind++];
}

int getBound(const int* arr, size_t sizeArr)
{
	if (!arr)
		return -1;

	for (size_t i = 0; i < sizeArr; i++)
	{
		if (arr[i] > arr[i + 1])
			return i + 1;
	}

	return -1;
}

void sortTwoConcatedSortedArrays(int* arr, size_t sizeArr)
{
	if (!arr)
		return;

	int startSecArr = getBound(arr, sizeArr);

	if (startSecArr == -1)
		return;

	int* temp = new int[sizeArr];

	merge(arr, startSecArr, arr + startSecArr, sizeArr - startSecArr, temp);

	for (size_t i = 0; i < sizeArr; i++)
		arr[i] = temp[i];

	delete[] temp;
}
int main()
{
	unsigned int n;
	std::cin >> n;

	int arr[MAX_SIZE];

	for (size_t i = 0; i < n; i++)
		std::cin >> arr[i];
	
	sortTwoConcatedSortedArrays(arr, n);

	for (size_t i = 0; i < n; i++)
	{
		std::cout << arr[i] << " ";
	}

	return 0;
}
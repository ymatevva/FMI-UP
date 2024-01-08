#include<iostream>
constexpr int MAX_SIZE = 100;

void insertionSort(int* arr, size_t length)
{
	if (!arr)
		return;

	for (int i = 1; i < length; i++)
	{
		int currentElement = arr[i];
		int currentIndex = i - 1;
		while (currentIndex >= 0 && arr[currentIndex] > currentElement)
		{
			arr[currentIndex + 1] = arr[currentIndex];
			currentIndex--;
		}
		arr[currentIndex + 1] = currentElement;
	}
}
void mergeArrays(const int* arr1, unsigned int n1, const int* arr2, unsigned int n2, int* result)
{
	if (!arr1 || !arr2)
		return;

	unsigned int resInd = 0;

	unsigned int arr1Ind = 0;
	unsigned int arr2Ind = 0;
	while (arr1Ind < n1 && arr2Ind < n2)
	{
		if (arr1[arr1Ind] <= arr2[arr2Ind])
			result[resInd++] = arr1[arr1Ind++];

		else
			result[resInd++] = arr2[arr2Ind++];
	}

	while (arr1Ind < n1)
	{
		result[resInd++] = arr1[arr1Ind++];
	}

	while (arr2Ind < n2)
	{
		result[resInd++] = arr2[arr2Ind++];
	}
}
int main()
{
	unsigned int n1;
	std::cin >> n1;

	int arr1[MAX_SIZE];
	for (size_t i = 0; i < n1; i++)
		std::cin >> arr1[i];

	unsigned int n2;
	std::cin >> n2;

	int arr2[MAX_SIZE];
	for (size_t i = 0; i < n2; i++)
		std::cin >> arr2[i];

	int* result = new int[n1+n2];
	insertionSort(arr1, n1);
	insertionSort(arr2, n2);
	mergeArrays(arr1, n1, arr2, n2,result);

	for (size_t i = 0; i < n1+n2; i++)
		std::cout << result[i] << " ";
	
	delete[] result;
	return 0;
}
#include<iostream>
constexpr int MAX_SIZE = 100;

unsigned int dividedByK(const int* arr, size_t length, int K)
{
	if (!arr)
		return 0;

	unsigned int count = 0;
	for (size_t i = 0; i < length; i++)
	{
		if (arr[i] % K == 0)
			count++;
	}
	return count;
}

int* numbersDividedByK(const int* arr1, size_t length1, const int* arr2, size_t length2, int K)
{
	if (!arr1 || !arr2)
		return 0;

	size_t newSize = dividedByK(arr1, length1, K) + dividedByK(arr2, length2,K);

	int* newArr = new int[newSize];
	unsigned newArrInd = 0;

	for (size_t i = 0; i < length1; i++)
	{
		if (arr1[i] % K == 0)
			newArr[newArrInd++] = arr1[i];
	}

	for (size_t i = 0; i < length2; i++)
	{
		if (arr2[i] % K == 0)
			newArr[newArrInd++] = arr2[i];
	}

	return newArr;
	delete[] newArr;
}


void printOutput(const int* arr, size_t length)
{
	for (size_t i = 0; i < length; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

void getInput(int* arr, size_t length)
{
	for (size_t i = 0; i < length; i++)
		std::cin >> arr[i];
}

int main()
{
	unsigned int n1;
	std::cin >> n1;

	int arr1[MAX_SIZE];
	getInput(arr1, n1);

	unsigned int n2;
	std::cin >> n2;

	int arr2[MAX_SIZE];
	getInput(arr2, n2);

	int K;
	std::cin >> K;

	int* result = numbersDividedByK(arr1, n1, arr2, n2, K);
	size_t newSize = dividedByK(arr1, n1, K) + dividedByK(arr2, n2, K);

	printOutput(result,newSize);

	delete[] result;
	return 0;
}
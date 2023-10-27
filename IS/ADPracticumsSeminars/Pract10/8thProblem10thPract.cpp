#include<iostream>
const int MAX_SIZE = 60;

int countSize(int array[], int n)
{
	int count = 0;
	for (size_t i = 1; i < n; i++)
	{
		if ((array[i] > array[i - 1] && array[i] > array[i + 1]))
			count++;
	}
	return count;
}
bool smallerThanBoth(int element,  int plusEl, int minusEl)
{
	return element < plusEl || element < minusEl;
}
int* newArr(int array[], int n, int& count)
{
	count = countSize(array, n);

	int* newArr = new int[count];
	int indexNew = 0;

	for (size_t i = 1; i < n; i++)
	{
		if (!(array[i] < array[i - 1] || array[i] < array[i + 1]))
		{
			newArr[indexNew] = array[i];
			indexNew++;
		}
	}

	return newArr;
	delete[] newArr;
}
int main()
{
	int n;
	std::cin >> n;

	int array[MAX_SIZE];
	for (size_t i = 0; i < n; i++)
	{
		std::cin >> array[i];
	}

	int count = 0;
	int* result = newArr(array, n,count);
	
	for (size_t i = 0; i < count; i++)
	{
		std::cout << result[i] << " ";
	}

	delete[] result;

	return 0;
}
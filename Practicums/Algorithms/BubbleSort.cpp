#include<iostream>
const int MAX_SIZE = 50;
// not the best way to sort

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
void printArr(const int* array, size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;
}
void bubbleSort(int* array, size_t size)
{
	for (int i = 0; i < size - 1; i++)
	{
		bool isSorted = false; 
		for (int j= 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(array[j], array[j + 1]);
				isSorted = true;
			}
		}
		if (!isSorted)
			return;
	}
}
int main()
{
	int size;
	std::cin >> size;
	int array[MAX_SIZE];

	for (size_t i = 0; i < size ; i++)
	{
		std::cin >> array[i];
	}
	
	bubbleSort(array, size);
	printArr(array, size);


	return 0;
}
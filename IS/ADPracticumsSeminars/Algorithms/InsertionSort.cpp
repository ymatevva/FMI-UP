#include<iostream>
const int MAX_SIZE = 50;
void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void print(const int* array, size_t size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;
}

void insert(int* array, size_t size)
{
	int el = array[size - 1];
	int iter = size - 2;

	while (iter >= 0 && el < array[iter])
	{
		array[iter + 1] = array[iter];
		iter--;
	}
	array[iter + 1] = el;
}
void insertionSort(int* array, size_t size)
{
	for (int i = 1; i < size; i++)
		insert(array, i + 1);
}
int main()
{
	int size;
	std::cin >> size;
	int array[MAX_SIZE];

	for (size_t i = 0; i < size; i++)
	{
		std::cin >> array[i];
	}

	insertionSort(array, size);
	print(array, size);


	return 0;
}
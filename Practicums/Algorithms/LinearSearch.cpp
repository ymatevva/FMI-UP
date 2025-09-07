#include<iostream>
const int MAX_SIZE = 50;

int linearSearch(const int* array, size_t size, int element)
{
	for (size_t i = 0; i < size; i++)
	{
		if (array[i] == element)
			return i;
	}
	return -1;
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

	int element;
	std::cin >> element;

	std::cout << linearSearch(array, size, element) << std::endl;

	return 0;
}
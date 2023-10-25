#include<iostream>
const int MAX_SIZE = 60;

void orderAboutTheElement(int* array, int n, int element)
{
	int* temp = new int[n];

	size_t iterTemp = 0;
	size_t positionEl = 0;

	for (size_t i = 0; i < n;i++)
	{
		if (array[i] < element )
			temp[iterTemp++] = array[i];
	}

	temp[iterTemp++] = element;

	for (size_t i = 0 ; i < n; i++)
	{
		if (array[i] > element)
			temp[iterTemp++] = array[i];
	}

	for (size_t i = 0; i < n; i++)
	{
		array[i] = temp[i];
	}

	delete[] temp;
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

	int element;
	std::cin >> element;

	orderAboutTheElement(array, n, element);

	for (size_t i = 0; i < n; i++)
	{
		std::cout << array[i] << " ";
	}


	return 0;
}
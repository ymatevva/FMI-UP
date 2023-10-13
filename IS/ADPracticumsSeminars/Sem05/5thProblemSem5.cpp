#include<iostream>

const int MAX_SIZE = 60;

int inversions(int arr[], int size)
{
	int inversions = 0;
	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = i; j < size; j++)
		{
			if (arr[i] > arr[j] && i < j)
			{
				inversions++;
			}
		}
	}
	return inversions;
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
	std::cout << inversions(array, n);















	return 0;
}
#include<iostream>
#include<climits>

const int MAX_SIZE = 100;

void minAndMAx(int arr[MAX_SIZE], int n)
{
	int smallest = INT_MAX;
	for (size_t i = 0; i < n; i++)
	{
		if (arr[i] < smallest)
		{
			smallest = arr[i];
		}
	}
	int biggest = INT_MIN;

	for (size_t i = 0; i < n; i++)
	{
		if (arr[i] > biggest)
		{
			biggest = arr[i];
		}
	}

	std::cout << "Min: " << smallest << std::endl;
	std::cout << "Max: " << biggest << std::endl;
}
int main()
{
	int n;
	std::cin >> n;

	int arr[MAX_SIZE];
	for (size_t i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}
	minAndMAx(arr, n);

	return 0;
}
#include<iostream>
const int MAX_SIZE = 100;

int smallest(int matrix[][MAX_SIZE], int n)
{
	int smallest = INT_MAX;
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			if (matrix[i][j] < smallest)
			{
				smallest = matrix[i][j];
			}
		}
	}
	return smallest;
}
int main()
{
	int n;
	std::cin >> n;

	int matrix[MAX_SIZE][MAX_SIZE];
	for (int i = 0; i < n; i++)
	{
		for (int j= 0; j < n; j++)
		{
			std::cin >> matrix[i][j];
		}
	}

	int smallestElement = smallest(matrix, n);
	std::cout << smallestElement << std::endl;


	return 0;
}
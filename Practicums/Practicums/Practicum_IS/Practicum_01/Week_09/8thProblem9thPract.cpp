#include<iostream>
const int MAX_SIZE = 50;

void toTheRigth(int matrix[][MAX_SIZE], int n)
{
	int tempArr[MAX_SIZE][MAX_SIZE];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			tempArr[i][j] = matrix[n - j - 1][i];
		}
	}

	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			matrix[i][j] = tempArr[i][j];
		}
	}
}
int main()
{
	int n;
	std::cin >> n;
	int matrix[MAX_SIZE][MAX_SIZE];
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			std::cin >> matrix[i][j];
		}
	}

	toTheRigth(matrix, n);

	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}










	return 0;
}
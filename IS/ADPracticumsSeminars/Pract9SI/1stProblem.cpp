#include<iostream>

constexpr int MAX_SIZE = 100;

void getInput(int matrix[][MAX_SIZE], int rows, int cols)
{
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			std::cin >> matrix[i][j];
		}
	}
}

int minElement(const int matrix[][MAX_SIZE], int rows, int cols)
{
	int minEl = 0;

	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			if (matrix[i][j] < minEl)
				minEl = matrix[i][j];
		}
	}
	return minEl;
}

int main()
{
	int rows, cols;
	std::cin >> rows >> cols;

	int matrix[MAX_SIZE][MAX_SIZE];

	getInput(matrix, rows, cols);

	std::cout << minElement(matrix, rows, cols);

}
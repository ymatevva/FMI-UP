#include<iostream>
const int MAX_SIZE = 50;

void sumOfEachRow(int matrix[][MAX_SIZE], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		int sum = 0;
		for (int j = 0; j < cols; j++)
		{
			sum += matrix[i][j];
		}
		std::cout << "Sum of row " << i+1 << ": " << sum << std::endl;
	}
}
int main()
{
	int rows, cols;
	std::cin >> rows >> cols;

	int matrix[MAX_SIZE][MAX_SIZE];

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			std::cin >> matrix[i][j];
		}
	}

	sumOfEachRow(matrix, rows, cols);

	return 0;
}
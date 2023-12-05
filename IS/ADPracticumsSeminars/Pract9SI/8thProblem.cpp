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

void multiplyMatrixes(const int matrix1[][MAX_SIZE], int row1, int col1, const int matrix2[][MAX_SIZE], int row2, int col2, int result[][MAX_SIZE])
{
	for (size_t i = 0; i < row1; i++)
	{
		for (size_t j = 0; j < col2; j++)
		{
			result[i][j] = 0;
			for (size_t k = 0; k < col1; k++)
			{
				result[i][j] += matrix1[i][k] * matrix2[k][j];
			}
		}
	}
}
void printMatrix(const int matrix[][MAX_SIZE], int rows, int cols)
{
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
}
int main()
{
	int row1, col1;
	std::cin >> row1 >> col1;

	int matrix1[MAX_SIZE][MAX_SIZE];
	getInput(matrix1, row1,col1);

	int row2,col2;
	std::cin >> row2>>col2;

	int matrix2[MAX_SIZE][MAX_SIZE];
	getInput(matrix2, row2,col2);

	int result[MAX_SIZE][MAX_SIZE];

	multiplyMatrixes(matrix1, row1,col1, matrix2, row2,col2, result);

	printMatrix(result, row1,col2);

}
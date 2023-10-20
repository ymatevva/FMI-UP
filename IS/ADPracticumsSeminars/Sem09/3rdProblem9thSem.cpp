#include<iostream>
const int MAX_SIZE = 60;
void transpose(int matrix1[][MAX_SIZE], int row1, int col1, int matrix2[][MAX_SIZE], int row2, int col2, int result[][MAX_SIZE])
{
	if (col1 != row2)
		return;

	for (size_t i = 0; i < row1; i++)
	{
		for (size_t j = 0; j < col2; j++)
		{
			for (size_t k= 0; k < col1; k++)
			{
				result[i][j] = matrix1[i][k] * matrix2[k][j];
			}
		}
	}
}
int main()
{
	int row1, col1;
	std::cin >> row1 >> col1;

	int matrix1[MAX_SIZE][MAX_SIZE];

	for (int i = 0; i < row1; i++)
	{
		for (size_t j = 0; j < col1; j++)
		{
          std::cin >> matrix1[i][j];
		}	
	}

	int row2, col2;
	std::cin >> row2 >> col2;

	int matrix2[MAX_SIZE][MAX_SIZE];

	for (int i = 0; i < row2; i++)
	{
		for (size_t j = 0; j < col2; j++)
		{
			std::cin >> matrix2[i][j];
		}
	}

	if (col1 != row2)
	{
		std::cout << "The matrixes are not compatible" << std::endl;
		return 0;
	}

	int result[MAX_SIZE][MAX_SIZE];

	transpose(matrix1, row1, col1, matrix2, row2, col2, result);
	for (size_t i = 0; i < row1; i++)
	{
		for (size_t j = 0; j < col2; j++)
		{
			std::cout << result[i][j] << " ";
		}
		std::cout << std::endl;
	}

	return 0;
}
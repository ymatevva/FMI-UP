#include<iostream>
const int MAX_SIZE = 50;

void multiplyTwoMatrixes(int matrix1[][MAX_SIZE], int matrix2[][MAX_SIZE], int row1, int col1, int row2, int col2,int result[][MAX_SIZE])
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
int main()
{
	int row1, col1;
	std::cin >> row1 >> col1;

	int matrix1[MAX_SIZE][MAX_SIZE];
	for (size_t i = 0; i < row1; i++)
	{
		for (size_t j = 0; j < col1; j++)
		{
			std::cin >> matrix1[i][j];
		}
	}

	int row2, col2;
	std::cin >> row2 >> col2;

	int matrix2[MAX_SIZE][MAX_SIZE];
	for (size_t i = 0; i < row2; i++)
	{
		for (size_t j = 0; j < col2; j++)
		{
			std::cin >> matrix2[i][j];
		}
	}

	int result[MAX_SIZE][MAX_SIZE];
	multiplyTwoMatrixes(matrix1, matrix2, row1, col1, row2, col2,result);


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
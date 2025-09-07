#include<iostream>
const int MAX_SIZE = 60;
int** newMatrix(int matrix[][MAX_SIZE], int rows, int cols, int index)
{
	int** newMatrix = new int*[rows];
	for (int i = 0; i < rows; i++)
	{
		newMatrix[i] = new int[cols - 1];
	}

	
	for (int i = 0; i < rows; i++)
	{int newCols = 0;
		for (int j = 0; j < cols ; j++)
		{
			if (j == index)
				continue;

			newMatrix[i][newCols] = matrix[i][j];
			newCols++;
		}
	}

	return newMatrix;
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

	int index;
	std::cin >> index;

	int** result = newMatrix(matrix, rows, cols, index);

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols-1; j++)
		{
			std::cout << result[i][j] << " ";
		}
		std::cout << std::endl;
	}

	for (int i = 0; i < rows; i++)
	{
		delete[] result[i];
	}

	delete[]result;
	return 0;
}
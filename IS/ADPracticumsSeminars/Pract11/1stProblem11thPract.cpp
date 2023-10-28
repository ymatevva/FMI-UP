#include<iostream>
const int MAX_SIZE = 50;

int** newMatrix(int matrix[][MAX_SIZE], int row, int col, int index)
{

	int** newMatrix = new int*[row - 1];

	for (int i = 0; i < row-1 ; i++)
	{
		newMatrix[i] = new int[col];
	}
	int newRow = 0;
	for (int i = 0; i < row; i++)
	{
		if (i == index)
			continue;

		for (int j = 0; j < col; j++)
		{
			newMatrix[newRow][j] = matrix[i][j];
		}
		newRow++;
	}

	return newMatrix;

	for (size_t i = 0; i < row - 1; i++)
	{
		delete[] newMatrix[i];
	}
	delete[] newMatrix;
}

int main()
{
	int row, col;
	std::cin >> row >> col;

	int matrix[MAX_SIZE][MAX_SIZE];
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			std::cin >> matrix[i][j];
		}
	}

	int index;
	std::cin >> index;
	if (index > row)
	{
		std::cout << "try again";
		std::cin >> index;
	}

	int** result = newMatrix(matrix, row, col, index);

	for (size_t i = 0; i < row - 1; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			std::cout << result[i][j] << " ";
		}
		std::cout << std::endl;
	}


	for (size_t i = 0; i < row - 1; i++)
	{
		delete[] result[i];
	}
	delete[] result;
	return 0;
}
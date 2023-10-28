#include<iostream>
const int MAX_SIZE = 50;
void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
int** transpone(int matrix[][MAX_SIZE], int& rows, int& cols)
{

	int** newMatrix = new int* [cols];
	for (int i = 0; i < cols; i++)
	{
		newMatrix[i] = new int[rows];
	}

	for (int i = 0; i < cols; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			newMatrix[i][j] = matrix[j][i];
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

	int** result = transpone(matrix, rows, cols);

	for (int i = 0; i < cols; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			std::cout << result[i][j] << " ";
		}
		std::cout << std::endl;
	}

	for (int i = 0; i < rows; i++)
	{
		delete[] result[i] ;
	}

	delete[] result;
	return 0;
}
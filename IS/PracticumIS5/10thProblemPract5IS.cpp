#include<iostream>
const int MAX_SIZE = 50;

void addTenToEach(int matrix[][MAX_SIZE], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			matrix[i][j] *= 10;
		}
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

	addTenToEach(matrix, rows, cols);

	
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			std::cout <<  matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}


	return 0;
}
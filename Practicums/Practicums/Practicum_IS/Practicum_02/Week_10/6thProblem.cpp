#include<iostream>
constexpr int MAX_SIZE = 10;
constexpr unsigned COLS_SIZE = 3;

void printMatrix(const int matrix[][MAX_SIZE], size_t rows, size_t COLS_SIZE);

int main() {

	unsigned int rows;
	std::cin >> rows;

	int matrix[MAX_SIZE][MAX_SIZE];

	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < COLS_SIZE; j++)
		{
			std::cin >> matrix[i][j];
		}
	}

	printMatrix(matrix, rows,COLS_SIZE);
}


void printMatrix(const int matrix[][MAX_SIZE], size_t rows, size_t COLS_SIZE)
{
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < COLS_SIZE; j++)
		{
			std::cout <<  matrix[i][j] <<  " ";
		}
		std::cout << std::endl;
	}
}
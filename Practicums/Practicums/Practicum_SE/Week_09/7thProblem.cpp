#include<iostream>

constexpr int MAX_SIZE = 100;

void getInput(int matrix[][MAX_SIZE], unsigned int n)
{
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			std::cin >> matrix[i][j];
		}
	}
}

void turnToRigth(int matrix[][MAX_SIZE], size_t length)
{
	int tempMatrix[MAX_SIZE][MAX_SIZE];

	for (size_t i = 0; i < length; i++)
	{
		for (size_t j = 0; j < length; j++)
		{
			tempMatrix[i][j] = matrix[length-j-1][i];
		}
	}

	for (size_t i = 0; i < length; i++)
	{
		for (size_t j = 0; j < length; j++)
		{
			matrix[i][j] = tempMatrix[i][j];
		}
	}
}
void printMatrix(const int matrix[][MAX_SIZE], size_t length)
{
	for (size_t i = 0; i < length; i++)
	{
		for (size_t j = 0; j < length; j++)
		{
			std::cout << matrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
}
int main()
{
	int n;
	std::cin >> n;

	int matrix[MAX_SIZE][MAX_SIZE];

	getInput(matrix, n);
	turnToRigth(matrix, n);
	printMatrix(matrix, n);

}
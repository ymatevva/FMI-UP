#include<iostream>

constexpr int MAX_SIZE = 100;

void getInput(int matrix[][MAX_SIZE],unsigned int n)
{
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			std::cin >> matrix[i][j];
		}
	}
}

void printMain(const int matrix[][MAX_SIZE], unsigned int n)
{
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j= 0; j < n; j++)
		{
			if (i == j)
				std::cout << matrix[i][j] << " ";
		}
	}
}

void printSecondDiag(const int matrix[][MAX_SIZE], unsigned int n)
{
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			if (n-i-1 == j)
				std::cout << matrix[i][j] << " ";
		}
	}
}

void printDiagonals(const int matrix[][MAX_SIZE], unsigned int n)
{
	printMain(matrix, n);
	std::cout << std::endl;
	printSecondDiag(matrix, n);
}

int main()
{
	int n;
	std::cin >> n;

	int matrix[MAX_SIZE][MAX_SIZE];

	getInput(matrix, n);

	printDiagonals(matrix, n);

}
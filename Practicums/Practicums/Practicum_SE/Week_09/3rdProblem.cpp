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

void printZigZag(const int matrix[][MAX_SIZE], size_t length)
{
	for (size_t rows = 0; rows < length; rows++)
	{
		if (rows % 2 == 0) 
			for (size_t j = 0; j < length; j++)
				std::cout << matrix[rows][j] << " ";
			

		else
			for (int j = length-1; j >= 0; j--)
				std::cout << matrix[rows][j] << " ";
			

		std::cout << std::endl;
	}
}
int main()
{
	int n;
	std::cin >> n;

	int matrix[MAX_SIZE][MAX_SIZE];

	getInput(matrix, n);
	printZigZag(matrix, n);
	

}
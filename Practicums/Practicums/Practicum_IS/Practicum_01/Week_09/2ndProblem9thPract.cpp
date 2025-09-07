#include<iostream>
const int MAX_SIZE = 60;

void mainSecondDiagonal(int matrix[][MAX_SIZE], int n)
{
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			if (i == j)
			{
				std::cout << matrix[i][j] << " ";
			}
		}
		
	}
	std::cout << std::endl;

	for (int i = 0; i < n; i++)
	{
		for (int j = n-1; j >= 0; j--)
		{
			if (j == n - i -1)
			{
				std::cout << matrix[i][j] << " ";
			}
		}
	}

}
int main()
{
	int n;
	std::cin >> n;
	int matrix[MAX_SIZE][MAX_SIZE];
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			std::cin >> matrix[i][j];
		}
	}

	mainSecondDiagonal(matrix, n);
	














	return 0;
}
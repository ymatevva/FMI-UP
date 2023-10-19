#include<iostream>
const int MAX_SIZE = 50;
void addition(int matrix1[][MAX_SIZE],int matrix2[][MAX_SIZE], int n, int m)
{
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			matrix1[i][j] += matrix2[i][j];
		}
	}
}
int main()
{
	int n, m;
	std::cin >> n>> m;
	int matrix1[MAX_SIZE][MAX_SIZE];
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			std::cin >> matrix1[i][j];
		}
	}
	int matrix2[MAX_SIZE][MAX_SIZE];
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			std::cin >> matrix2[i][j];
		}
	}
	addition(matrix1, matrix2, n, m);
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			std::cout << matrix1[i][j] << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}
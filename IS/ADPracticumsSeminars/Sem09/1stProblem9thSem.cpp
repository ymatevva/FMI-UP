#include<iostream>
const int MAX_SIZE = 60;
void transposeMatrix(int matrix[][MAX_SIZE], int n)
{
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			std::cout << matrix[j][i] << " ";
		}
		std::cout << std::endl;
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
	
	transposeMatrix(matrix, n);
	return 0;
}
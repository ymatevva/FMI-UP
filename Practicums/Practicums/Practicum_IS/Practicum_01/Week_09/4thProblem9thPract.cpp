#include<iostream>
const int MAX_SIZE = 50;
bool triangleMatrix(int matrix[][MAX_SIZE], int n)
{
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j= 0; j < n; j++)
		{
			if (i > j && matrix[i][j]!= 0)
			{
				return false;
				break;
			}
		}
	}
	return true;
}
int main()
{
	int n;
	std::cin >> n;
	int matrix[MAX_SIZE][MAX_SIZE];
	for (size_t i = 0; i < n ;i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			std::cin >> matrix[i][j];
		}
	}
	std::cout << std::boolalpha << triangleMatrix(matrix, n) << std::endl;

	return 0;
}
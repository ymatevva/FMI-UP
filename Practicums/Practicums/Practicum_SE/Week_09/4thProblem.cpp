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

bool isTrangleMatrix(const int matrix[][MAX_SIZE], size_t n)
{
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			if (i > j && matrix[i][j] != 0)
				return false;
		}
	}
	return true;
}
int main()
{
	int n;
	std::cin >> n;

	int matrix[MAX_SIZE][MAX_SIZE];

	getInput(matrix, n);
	
	std::cout << std::boolalpha << isTrangleMatrix(matrix, n);


}
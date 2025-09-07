#include<iostream>
const int MAX_SIZE = 50;

void zigZag(int matrix[MAX_SIZE][MAX_SIZE], int n)
{
	for (size_t i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			for (size_t j = 0; j < n; j++)
			{
				std::cout << matrix[i][j] << " ";
			}
		}

		else
		{
			for (int  j = n-1; j >= 0; j--)
			{
				std::cout << matrix[i][j] << " ";
			}
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

	zigZag(matrix, n);
	return 0;
}
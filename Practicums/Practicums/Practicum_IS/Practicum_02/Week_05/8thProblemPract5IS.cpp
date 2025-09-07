#include<iostream>
const int MAX_SIZE = 50;

void findSumOfDiagonals(int matrix[][MAX_SIZE], int n)
{
	int sumMain = 0;
	int sumSecMain = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j)
				sumMain += matrix[i][j];

			 if (i == n - j - 1)
				sumSecMain += matrix[i][j];
		}
	}

	std::cout << sumMain << " " << sumSecMain;
}
int main()
{
	int n;
	std::cin >> n;

	int matrix[MAX_SIZE][MAX_SIZE];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			std::cin >> matrix[i][j];
		}
	}

	findSumOfDiagonals(matrix, n);


	return 0;
}
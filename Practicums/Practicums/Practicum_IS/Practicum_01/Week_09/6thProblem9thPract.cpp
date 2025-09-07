#include<iostream>
const int MAX_SIZE = 50;
bool isMagicSquare(int matrix[][MAX_SIZE], int n)
{
	int sum = 0;
	for (size_t i = 0; i < 1; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			sum += matrix[i][j];
		}
	}

	int sumMainDiag = 0;
	int secondDiag = 0;
	bool rowsCols = true;
	for (size_t i = 0; i < n; i++)
	{
		int sumRows = 0;
		int sumCols = 0;
		
		for (size_t j = 0; j < n; j++)
		{
			sumRows += matrix[i][j];
		}

		for (size_t j = 0; j < n ; j++)
		{
			sumCols += matrix[j][i];
		}

		if ( sumRows!=sum || sumCols != sum)
		{
			rowsCols = false;
			break;
		}
	}
	bool diagonals = true;
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			if (i == j)
				sumMainDiag += matrix[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; j >= 0; j--)
		{
			if (j == n - i - 1)
				secondDiag += matrix[i][j];
		}
	}
	if (secondDiag != sum || sumMainDiag!= sum)
		diagonals = false;

	if (diagonals && rowsCols)
		return true;
	else
		return false;
	
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

	std :: cout << std :: boolalpha << isMagicSquare(matrix, n);
	return 0;
}
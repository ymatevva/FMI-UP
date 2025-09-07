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

int getSumFirstRow(const int matrix[][MAX_SIZE], unsigned int n)
{
	int sum = 0;
	for (size_t j = 0; j < n; j++)
	{
		sum += matrix[0][j];
	}
	return sum;
}

bool sumRows(const int matrix[][MAX_SIZE], size_t length, int initialSum)
{

	for (size_t i = 0; i < length; i++)
	{
		int currSum = 0;
		for (size_t j = 0; j < length; j++)
		{
			currSum += matrix[i][j];
		}

		if (currSum != initialSum)
			return false;
	}
	return true;
}

bool sumCols(const int matrix[][MAX_SIZE], size_t length, int initialSum)
{
	
	for (size_t i = 0; i < length; i++)
	{
		int currSum = 0;
		for (size_t j = 0; j < length; j++)
		{
			currSum += matrix[j][i];
		}

		if (currSum != initialSum)
			return false;
	}
	return true;
}

bool sumMainDiag(const int matrix[][MAX_SIZE], size_t length, int initialSum)
{
    int currSum = 0;
	for (size_t i = 0; i < length; i++)
	{
		
		for (size_t j = 0; j < length; j++)
		{
			if(i == j)
			currSum += matrix[j][i];
		}	
	}
	return currSum == initialSum;
		
}
bool sumSecDiag(const int matrix[][MAX_SIZE], size_t length, int initialSum)
{
    int currSum = 0;
	for (size_t i = 0; i < length; i++)
	{
		
		for (size_t j = 0; j < length; j++)
		{
			if (length-i-1 == j)
				currSum += matrix[j][i];
		}
	}
	return currSum == initialSum; return true;
}

bool isMagicSquare(const int matrix[][MAX_SIZE], unsigned int n)
{
	int initialSum = getSumFirstRow(matrix, n);
	return sumCols(matrix, n, initialSum) && sumRows(matrix, n, initialSum) && sumMainDiag(matrix, n, initialSum) && sumSecDiag(matrix, n, initialSum);
}
int main()
{
	int n;
	std::cin >> n;

	int matrix[MAX_SIZE][MAX_SIZE];

	getInput(matrix, n);

	std::cout << std :: boolalpha << isMagicSquare(matrix, n);
}
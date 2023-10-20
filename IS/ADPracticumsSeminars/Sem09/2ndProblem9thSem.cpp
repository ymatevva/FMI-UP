#include<iostream>
const int MAX_SIZE = 50;

bool isEquivalenceRelation(int matrix[][MAX_SIZE], int n)
{
	//reflexive
	for (size_t i = 0; i < n; i++)
	{
		if (matrix[i][i]!=1)
		{
			return false;
			break;
		}
	}

	//simmetry
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			if (matrix[i][j]!=matrix[j][i])
			{
				return false;
				break;
			}
		}
	}
	//transitivity
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			for (size_t k = 0; k < n; k++)
			{
				if (matrix[i][j]== 1 && matrix[j][k]==1 && matrix[i][k]!=1)
				{
					return false;
					break;
				}
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
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			std::cin >> matrix[i][j];
		}
	}

	std::cout << std::boolalpha << isEquivalenceRelation(matrix, n) << std::endl;

	return 0;
}
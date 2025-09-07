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
void transpose(const int matrix[][MAX_SIZE], unsigned int length)
{
	for (size_t i = 0; i < length; i++)
	{
		for (size_t j= 0; j < length; j++)
			std::cout << matrix[j][i] << " ";		

		std::cout << std::endl;
	}
}
int main()
{
	int n;
	std::cin >> n;

	int matrix[MAX_SIZE][MAX_SIZE];

	getInput(matrix, n);

	std::cout << std::boolalpha << isTrangleMatrix(matrix, n);


}
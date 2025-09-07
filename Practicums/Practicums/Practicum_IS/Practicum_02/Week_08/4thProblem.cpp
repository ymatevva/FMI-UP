#include<iostream>
constexpr int MAX_SIZE = 10;

double getMaxAvearage(const int matrix[][MAX_SIZE], int students, int grades)
{
	double maxAverage = 0;
	for (size_t i = 0; i < students; i++)
	{
		int currSum = 0;
		for (size_t j = 0;  j < grades;  j++)
			currSum += matrix[i][j];
		

		if (currSum > maxAverage)
			maxAverage = currSum;
		
	}
	maxAverage /= grades;
	return maxAverage;
}
void getInput(int matrix[][MAX_SIZE], int students, int grades)
{
	for (size_t i = 0; i < students; i++)
	{
		for (size_t j = 0; j < grades; j++)
		{
			std::cin >> matrix[i][j];
		}
	}
}
int main()
{
	unsigned int students, grades;
	std::cin >> students >> grades;

	int matrix[MAX_SIZE][MAX_SIZE];
	getInput(matrix, students, grades);
	std :: cout << getMaxAvearage(matrix, students, grades);

	return 0;
}
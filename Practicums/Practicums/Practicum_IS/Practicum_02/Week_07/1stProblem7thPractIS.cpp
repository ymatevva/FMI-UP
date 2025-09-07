#include<iostream>


int main()
{
	int teachers;
	std::cin >> teachers;

    int grades;
	std::cin >> grades;

	int** matrix = new int*[teachers];

	for (size_t i = 0; i < teachers; i++)
	{
		matrix[i] = new int[grades];
	}
	   
	for (size_t i = 0; i < teachers; i++)
	{
		for (size_t j = 0; j < grades; j++)
		{
			std::cin >> matrix[i][j];
		}
	}

	for (size_t i = 0; i < teachers; i++)
	{
		delete[]  matrix[i];
	}

	delete[] matrix;

	return 0;
}
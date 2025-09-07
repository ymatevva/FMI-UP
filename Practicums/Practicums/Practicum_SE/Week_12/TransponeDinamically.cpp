#include<iostream>

int** transpone(int** mtx, size_t rows, size_t colls)
{
	if (!mtx)
		return nullptr;

	int** newMatrix = new int* [colls];
	for (int i = 0; i < colls; i++)
	{
		newMatrix[i] = new int[rows];
		for (int j = 0; j < rows; j++)
		{
			newMatrix[i][j] = mtx[j][i];
		}
	}

	return newMatrix;
	
}
void free(int** mtx, size_t rows,size_t cols)
{
	for (size_t i = 0; i < rows; i++)
	{
		delete[] mtx[i];
	}
	delete[] mtx;
}
void printMtx(int** mtx, size_t rows, size_t colls)
{
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < colls; j++)
		{
			std::cout << mtx[i][j] << " ";
		}
		std::cout << std::endl;
	}
}
int main()
{
	unsigned int rows, cols;
	std::cin >> rows >> cols;

	int** mtx = new int*[rows];
	for (size_t i = 0; i < rows; i++)
	{
		mtx[i] = new int[cols];
		for (size_t j = 0; j < cols; j++)
		{
			std::cin >> mtx[i][j];
		}
	}

	int** result = transpone(mtx, rows, cols);
	printMtx(result, cols, rows);

	free(result, cols, rows);
	free(mtx, rows, cols);
	return 0;
}
#include<iostream>
int** removeRow(int** mtx, size_t rows, size_t cols, unsigned indexRow)
{
	if (!mtx)
		return nullptr;

	int** newMtx = new int* [rows - 1];
	for (size_t i = 1; i <= rows; i++)
	{
		if (i == indexRow)continue;
		newMtx[i] = new int[cols];
		for (size_t j = 1; j <= cols; j++)
		{
			newMtx[i][j] = mtx[i][j];
		}
	}
	return newMtx;
}
void free(int** mtx, size_t rows, size_t cols)
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

	int** mtx = new int* [rows];
	for (size_t i = 0; i < rows; i++)
	{
		mtx[i] = new int[cols];
		for (size_t j = 0; j < cols; j++)
		{
			std::cin >> mtx[i][j];
		}
	}

	unsigned int indexRow = 0;
	std::cin >> indexRow;

	int** res = removeRow(mtx, rows, cols, indexRow);
	printMtx(res, rows - 1, cols);

	free(res, rows - 1, cols);
	free(res, rows, cols);
	return 0;
}
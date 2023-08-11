#include<iostream>

int main()
{


    int rows ,cols;
    std :: cin >> rows >> cols;

    int **matrix = new int*[rows];
    for (int i = 0; i < rows; ++i)
    {
        matrix[i] = new int[cols];
        for (int j = 0; j < cols; ++j)
        {
            std :: cin >> matrix[i][j];
        }
    }


    bool isAscending = true;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols ; ++j)
        {
            int row = i;
            int col = j;
            while (row < rows - 1 && col < cols - 1)
            {
                if (matrix[row][col] >= matrix[row + 1][col + 1])
                {
                    isAscending = false;
                }
                row++;
                col++;
            }
        }
    }
    

    return 0;
}
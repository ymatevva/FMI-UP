#include <iostream>
#include<climits>


int maxRow(int **matrix,int size)
{
    int maxRow ;
    int sum = 0;
    int maxSum = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            sum += matrix[i][j];
        }
        if (sum > maxSum)
        {
            maxSum = sum;
            maxRow = i;
        }
    }

    return maxRow;
}

int maxCol(int **matrix, int size)
{
    int maxCol;
    int sum = 0;
    int maxSum = 0;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            sum += matrix[i][j];
        }
        if (sum > maxSum) {
            maxSum = sum;
            maxCol = i;
        }
    }
    return maxCol;
}

int main()
{
    int N;
    std :: cin >> N;

    int **matrix = new int *[N];

    for (int i = 0; i < N; i++)
    {
        matrix[i] = new int[N];
    }


    for (size_t i = 0; i < N; i++)
    {
        for (size_t j = 0; j < N; j++)
        {
            std::cin >> matrix[i][j];
        }
    }

    std :: cout << "The row with the max sum is: " << maxRow(matrix,N) << std :: endl;
    std :: cout << "The col with the max sum is: " << maxCol(matrix,N) << std :: endl;






    return 0;
}
#include<iostream>
const int MAX_SIZE = 100;

int maxCol(int matrix[][MAX_SIZE], int row, int col)
{
    int sumCol = 0;
    int maxSum = 0;
    int indexCol = 0;
    int currIndex ;

    for (int i = 0; i < col; ++i) {

        currIndex  = i; //index cols
        for (int j = 0; j < row; ++j) //index rows
        {
            sumCol += matrix[j][i];
        }


        if (sumCol > maxSum )
        {
            maxSum = sumCol;
            indexCol = currIndex;
            sumCol = 0;
        }
    }
    return indexCol;
}


int main()
{

    int M, N;
    std :: cin >> M >> N;

    int matrix[MAX_SIZE][MAX_SIZE];

    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < N ; ++j)
        {
            std::cin >> matrix[i][j];
        }
    }

   int index = maxCol(matrix,M,N);
    std :: cout << index << std :: endl;

    for (int i = 0; i < M; ++i)
    {
        std :: cout << matrix[i][index] << " ";
    }
    

    return 0;
}
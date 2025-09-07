#include<iostream>
const int MAX_SIZE  = 20;
void inputMatrix(int matrix[][MAX_SIZE],int size)
{
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size ; ++j)
        {
            std :: cin >> matrix[i][j];
        }
    }
}

int main()
{
    int N;
    std :: cin >> N;
    int matrix[MAX_SIZE][MAX_SIZE];
    inputMatrix(matrix, N);

   //под главния диагонал, включително елементите по него

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N ; j++)
        {
            if(i >= j)
            {
                std :: cout << matrix[i][j] << " ";
            }
        }
        std :: cout << std :: endl;
    }

    //над главния диагонал, без елементите по него
    std :: cout << std :: endl;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N ; j++)
        {
            if (i < j)
            {
                std :: cout << matrix[i][j] << " ";
            }
        }
        std :: cout << std :: endl;
    }
    std :: cout << std :: endl;

    //под второстепенния диагонал, без елементите по него
    for (int i = 0; i < N ; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            if(j + 1 < i)
            {
                std :: cout << matrix[i][j] << " ";
            }
        }
        std :: cout << std :: endl;
    }
    std :: cout << std :: endl;

   //над второстепенния диагонал, включително елементите по него

    for (int i = 0; i < N ; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            if(i + 1 <= j)
            {
                std :: cout << matrix[i][j] << " ";
            }
        }
        std :: cout << std::endl;
    }



    return 0;
}
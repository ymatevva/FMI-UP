#include<iostream>
const int MAX_SIZE  = 50;
void inputMatrix(int **matrix,int n, int m)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            std::cin >> matrix[i][j];
        }
    }
}

void deletionCol(int **matrix,int n,int& m, int kElement)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = kElement; j < m - 1  ; ++j)
        {
            matrix[i][j]= matrix[i][j+1];
        }
    }
    m--;

}

void printMatrix(int **matrix,int n, int m)
{
    for (int i = 0; i < n ; ++i)
    {
        for (int j = 0; j < m ; ++j)
        {
            std :: cout << matrix[i][j] << " ";
        }
        std :: cout << std :: endl;
    }

}



int main()
{

    int N, M,  delElement;
    std::cin >> N >> M >> delElement;

    int **matrix = new int *[N];

    for (int i = 0; i < N; i++)
    {
        matrix[i] = new int[N];
    }

    inputMatrix(matrix, N,M);
    deletionCol(matrix,N,M,delElement);
    printMatrix(matrix,N,M);

    for (int i = 0; i < N; i++)
    {
        delete[] matrix[i];
    }

    // Deallocate memory for the array of pointers
    delete[] matrix;

    return 0;
}
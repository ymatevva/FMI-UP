#include<iostream>


int** deleteRow(int** arr, int M, int N, int index)//(**) because you need to pass a pointer to an array of pointers
{
    int** result = new int*[M - 1];//we create new array with number of rows with one less

    // Copy rows before the row to delete
    for (int i = 0; i < index; ++i) {
        result[i] = new int[N];//memory for each row
        for (int j = 0; j < N; ++j) {
            result[i][j] = arr[i][j];
        }
    }

    // Copy rows after the row to delete
    for (int i = index + 1; i < M; ++i) {
        result[i - 1] = new int[N];//memory for each row after the deleted
        for (int j = 0; j < N; ++j) {
            result[i - 1][j] = arr[i][j];
        }
    }

    // Delete the original array
    for (int i = 0; i < M; ++i) {
        delete[] arr[i];//deallocate row
    }
    delete[] arr;

    return result;

}
int main()
{
    int M, N;
    std :: cin >> M >> N;

    int** matrix = new int*[M];

    for (int i = 0; i <M ; ++i)
    {
            matrix[i] = new int[N];
    }

    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            std::cin >> matrix[i][j];
        }
    }
    int rowIndx;
    std :: cin >> rowIndx;

   int** newMatrix = deleteRow(matrix,M,N,rowIndx);

    for (int i = 0; i < M - 1; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            std::cout << newMatrix[i][j] << " ";
        }
        std::cout << std::endl;
    }


    // Free memory for both matrices
    for (int i = 0; i < M; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;

    for (int i = 0; i < M - 1; ++i) {
        delete[] newMatrix[i];
    }
    delete[] newMatrix;

    return 0;
}
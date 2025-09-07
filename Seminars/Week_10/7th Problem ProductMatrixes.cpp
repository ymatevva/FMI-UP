#include<iostream>
const int MAX_SIZE = 100;
void inputMatrix(int **matrix,int N)
{
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            std::cin >> matrix[i][j];
        }
    }
}


 void prodMatrixes(int **matrix1, int **matrix2, int N, int **prodMatrix)
 {
     int product = 1;
     for (int i = 0; i < N;i++ )
     {
         for (int j = 0; j < N; ++j)
         {
             int sum = 0;
             for (int k = 0; k < N; ++k) {
                 sum += matrix1[i][k]*matrix2[k][j];
             }
             prodMatrix[i][j] = sum;
         }
     }
 }

 void printMatrix(int **prodMatrix, int size)
 {
     for (int i = 0; i < size; ++i) {
         for (int j = 0; j < size ; ++j)
         {
             std :: cout << prodMatrix[i][j]<< " ";
         }
         std::cout<<std::endl;
     }
 }
int main()
{
   int N;
   std::cin >> N;

    int **matrix1 = new int*[N];
    int **matrix2 = new int*[N];
    int **prodMatrix = new int*[N];

    for (int i = 0; i < N; ++i)
    {
        matrix1[i]= new int[N];
        matrix2[i] = new int[N];
        prodMatrix[i] = new int[N];
    }

    inputMatrix(matrix1,N);
    inputMatrix(matrix2,N);

    prodMatrixes(matrix1,matrix2,N,prodMatrix);

    printMatrix(prodMatrix,N);



    return 0;
}
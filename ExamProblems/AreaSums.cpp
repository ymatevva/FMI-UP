#include <iostream>
const int MAX_SIZE = 100;



int findAreaSum(int matrix[][MAX_SIZE], int N, int row, int col)
{
    if (col < 0 || col >= N || row < 0 || row >= N||matrix[row][col]==0)
            return 0;


    int areaSum = matrix[row][col];//to mark the elements as visisted
    matrix[row][col] = 0;

    areaSum+= findAreaSum(matrix,N,row+1,col);
    areaSum+= findAreaSum(matrix,N,row-1,col);
    areaSum+= findAreaSum(matrix,N,row,col+1);
    areaSum+= findAreaSum(matrix,N,row,col-1);
    areaSum+= findAreaSum(matrix,N,row+1,col+1);
    areaSum+= findAreaSum(matrix,N,row+1,col-1);
    areaSum+= findAreaSum(matrix,N,row-1,col+1);
    areaSum+= findAreaSum(matrix,N,row-1,col-1);

    return areaSum;

}

int main()
{
    int N;
    std :: cin >> N;

    int matrix[MAX_SIZE][MAX_SIZE];

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            std::cin>>matrix[i][j];
        }
    }


    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (matrix[i][j]!=0)
            {
                int areaSum = findAreaSum(matrix,N,i,j);
                std::cout<<"Area sum is: " << areaSum<<std::endl;
            }
        }
    }
    return 0;
}
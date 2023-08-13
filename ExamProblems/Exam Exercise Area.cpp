#include <iostream>
const int MAX_SIZE = 100;

bool isZero(int number)
{
    if (number==0)
        return true;
    else
        return false;
}

bool isThereAreaS(int matrix[][MAX_SIZE], int N,int S,int row, int col, int index,int currSum)
{
    if (col < 0 || col >= N || row < 0 || row >= N||matrix[row][col] == 0)
        return false;

    currSum+=matrix[row][col];

    if (currSum == S)
    {
        return true;
    }

    int temp = matrix[row][col];//to mark the elements as visisted
    matrix[row][col] = 0;



    bool isArea = (
    isThereAreaS(matrix, N, S, row+1,col,index+1,currSum)||
    isThereAreaS(matrix, N, S, row-1,col,index+1,currSum)||
    isThereAreaS(matrix, N, S, row,col+1,index+1,currSum)||
    isThereAreaS(matrix, N, S, row,col-1,index+1,currSum)||
            isThereAreaS(matrix, N, S, row + 1, col + 1,index + 1, currSum) ||
            isThereAreaS(matrix, N, S, row - 1, col - 1,index+1, currSum) ||
            isThereAreaS(matrix, N, S, row + 1, col - 1,index + 1, currSum) ||
            isThereAreaS(matrix, N, S, row - 1, col + 1,index + 1, currSum));

    matrix[row][col]= temp;

    return isArea;

}
bool findArea(int matrix[][MAX_SIZE], int S, int size)
{
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (isThereAreaS(matrix,size,S,i,j,0,0))
            {
                return true;
            }
        }
    }
    return false;
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

    int S;
    std :: cin >> S;

    bool area = findArea(matrix,S,N);
    if(area)
    {
        std :: cout << "there is area" << std :: endl;
    }
    else
        std :: cout << "There is no area" << std :: endl;


    return 0;
}
#include<iostream>
#include<cstring>
const int MAX_SIZE = 100;


bool findWordHelper(char matrix[][MAX_SIZE], char *word, int size, int row, int col,int index)
{
    if (row<0 || col < 0 || row>=size || col>=size)
    {
        return false;
    }

    if (matrix[row][col]!= word[index])
    {
        return false;
    }
    if (index==strlen(word)-1)
    {
        matrix[row][col] = '#';
        return true;
    }

    char originalChar = matrix[row][col];
    matrix[row][col] = '#'; // Replace character with '#'

    bool found = (
            findWordHelper(matrix,word,size,row+1,col,index+1)||
            findWordHelper(matrix,word,size,row-1,col,index+1)||
            findWordHelper(matrix,word,size,row,col+1,index+1)||
            findWordHelper(matrix,word,size,row,col-1,index+1)
            );
    if (!found)
    {
        matrix[row][col] = originalChar;
    }
    return found;
}
bool findWord(char matrix[][MAX_SIZE], char *word, int size )
{
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (findWordHelper(matrix,word,size,i,j,0))
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{

    int size;
    std :: cin >> size;

    std::cin.ignore();
    char matrix[MAX_SIZE][MAX_SIZE];

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cin>>matrix[i][j];
        }
    }

    char word[MAX_SIZE];
    std::cin>>word;

    bool isTrue = findWord(matrix,word,size);

    if (isTrue)
    {
        for (int i = 0; i < size; ++i) {
            for (int j = 0; j < size; ++j) {
                std::cout<<matrix[i][j]<<" ";
            }
            std::cout<< std :: endl;
        }

    }
    else
    {
        std :: cout << "Not found in the matrix" << std :: endl;
    }


}
#include<iostream>
const int MAX_SIZE = 100;
int r, c;//row and column number of the matrix
int matrix[MAX_SIZE][MAX_SIZE];//elements of the matrix
bool visited[MAX_SIZE][MAX_SIZE];//checks if the cell has been visited during dfs

bool isValid(int rows, int cols)
{
    return rows >= 0 && rows <= r && cols >= 0 && cols <= c;//if row and column pair is in the limits
}
void dfs( int rows, int cols)// depth first search
{

    visited[rows][cols] = true;//marks the current cell as visited

    static int dr[] = {1,-1,0,0};//arrays representnig moving in the four directions up down left right
    static int dc[] = {0,0,-1,1};

    for (int i = 0; i < 4; ++i) {//This calculates the indices of the neighboring cells in the given direction.
        int newRow = rows + dr[i];
        int newCol = cols + dc[i];


        if (isValid(newRow,newCol) && matrix[newRow][newCol] == 1 && !visited[newRow][newCol])//recursivly callling itself if is valid is one and hasnt been visited before
        {
            dfs(newRow,newCol);
        }
    }
}

int countRegions()
{

    int count = 0;
    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            if (matrix[i][j] == 1 && !visited[i][j])
            {
                dfs(i,j);
                count++;
            }
        }
    }

    return count;
}
int main()
{

    std :: cin >> r >> c;


    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            std :: cin >> matrix[i][j];
            visited[i][j] = false;
        }
    }

    int regions = countRegions();
    std :: cout << "The number of regions: " << regions << std :: endl;

    return 0;
}
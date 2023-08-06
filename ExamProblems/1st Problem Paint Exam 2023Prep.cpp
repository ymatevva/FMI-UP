#include<iostream>
#include<cassert>
const int MAX_SIZE = 1000;

char matrix[MAX_SIZE][MAX_SIZE];
int n, m;
int X,Y;
char find, replace;


void inputMatrix()
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m ; ++j)
        {
            std :: cin >> matrix[i][j];
        }
    }
}
void paintMatrix( int X , int Y)
{
    if (matrix[X][Y] != find)// if when we go on the road from the starting X,Y and we dont find the wanted symbol the functions returns nothing
        return;
    matrix[X][Y] = replace;//if it is found it replaces it

    paintMatrix(X-1,Y);//recursion
    paintMatrix(X+1,Y);
    paintMatrix(X,Y-1);
    paintMatrix(X,Y+1);

}
void printMatrix()//no arguments bc it uses the local var matrix to access
// n, m are also global
{
    for (int i = 0; i < n; ++i)
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
     std :: cout << "Enter sizes: " << std :: endl;
     std :: cin >> n >> m;
     assert(n > 0 && m < 1000);

     std :: cout << "Input the matrix: " << std :: endl;
     inputMatrix();//input of the elements

     std :: cout << "Enter the coordinates: " << std :: endl;
     int x, y;// the position we want to start painting
     std :: cin >> x >> y;
     assert (x >= 0 && x <= m);//limits for x and y
     assert (y >= 0 && y <= n);

     std :: cout << "Enter the symbol you want to paint with: " << std :: endl;
     std :: cin >> replace;//symbol we want to paint with

     find = matrix[x][y];

        if (find != replace)
           paintMatrix(x,y);
        
        printMatrix();


    return 0;
}
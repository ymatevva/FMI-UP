#include <iostream>
const int MAX_SIZE = 50;
int indexRow ;
int indexCol ;
void indexLast(double matrix[][MAX_SIZE], int n)
{
    double average = 0;
    indexRow = 0;
    indexCol = 0;
    bool found = false;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (matrix[i][j]==matrix[i][0] || matrix[i][j] == matrix[i][n-1])
            {
                continue;
            }

            if (matrix[i][j] == (matrix[i][j-1]+matrix[i][j+1])/2)
            {
                found = true;
                indexRow = i;
                indexCol = j;
            }

        }
    }
    if (found)
    {
        std::cout << indexRow << " "<< indexCol << std :: endl;
    }
    else
    {
        std::cout << "-1" << std :: endl;
    }
}

int main()
{
    double n;
    std::cin >> n;

    double matrix[MAX_SIZE][MAX_SIZE];

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            std :: cin >> matrix[i][j];
        }
    }

    indexLast(matrix,n);

    return 0;
}
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

bool containsOne(int number)
{
    int count = 0;
    while(number > 0)
    {
        if (number % 10 == 1)
        {
           count++;
        }
        number/=10;
    }
    if (count > 0)
    {
        return true;
    }
    else
        return false;
}
int product(int matrix[][MAX_SIZE], int size)
{
    int product = 1;
    for (int i = 0; i < size ; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            if (containsOne(matrix[i][j]) &&  j + 1 < i)
            {
                product *= matrix[i][j];
            }
        }
    }
    return product;
}
int main()

{
    int N;
    std :: cin >> N;
    int matrix[MAX_SIZE][MAX_SIZE];
    inputMatrix(matrix, N);

    int prod = product(matrix,N);
    std :: cout << "The product is: " << prod << std :: endl;




    return 0;
}
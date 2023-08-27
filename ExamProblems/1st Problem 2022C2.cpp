#include <iostream>
const int MAX_SIZE = 10;

bool sameDigits(int number)
{
    bool digitsSeen[10] = {false};

    while (number > 0)
    {
        int digit = number % 10;
        if (digitsSeen[digit])
        {
            return true;
        }
        digitsSeen[digit] = true;
        number /= 10;
    }
    return false;
}
int* collect(int matrix[][MAX_SIZE],int size)
{
    int *arr = new int[size*size];
    int index = 0;
    for (int i = size - 1; i >= 0; i--)
    {
        for (int j = 0; j < size ; ++j)
        {
            if (sameDigits(matrix[i][j]))
            {
                arr[index] = matrix[i][j];
                index++;
            }
        }
    }
   return arr;
}

int main()
{

     int n;
     std :: cin >> n;

     int matrix[MAX_SIZE][MAX_SIZE];

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            std :: cin >> matrix[i][j];
        }
    }

    int *arr = collect(matrix,n);

    for (int i = 0; i < n*n; ++i)
    {
        if (arr[i] != 0)
        {
            std::cout<<arr[i] << " " ;
        }
    }
    delete[] arr;

    return 0;
}
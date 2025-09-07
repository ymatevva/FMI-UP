#include<iostream>
const int MAX_SIZE = 100;
void inputArray(double matrix[][MAX_SIZE], int size)
{

    for (int i = 0; i < size ; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            std::cin >> matrix[i][j];
        }
    }
}

int main()
{
    int N;
    std :: cin >> N;
    double matrix[MAX_SIZE][MAX_SIZE];
    inputArray(matrix,N);

    double sum = 0;
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            if (i > j)
            {
                sum += matrix[i][j];
            }
        }
    }

    std :: cout << "The sum of the elements under the main diagonal is: " << sum << std :: endl;

    return 0;
}
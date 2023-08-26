#include<iostream>
const int MAX_SIZE = 100;

bool isPrime(int number)
{
    if (number <= 1)
    {
        return false;
    }
    for (int i = 2; i < number ; ++i) {
        if (number%i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int size;
    std :: cin >> size;

    int array[MAX_SIZE];
    for (int i = 0; i < size; ++i)
    {
        std :: cin >> array[i];
    }

    int problems = 0;

    for (int i = 0; i < size; ++i)
    {
        for (int j = i + 1; j < size; ++j)
        {

            if ( isPrime(array[i] ) && !isPrime(array[j]) )
            {
                problems++;
            }

            else if (isPrime(array[i]) && isPrime(array[j]) && array[i] > array[j])
            {
                problems++;
            }

        }
    }


        std :: cout << "The problems are: " << problems << std :: endl;


    return 0;
}
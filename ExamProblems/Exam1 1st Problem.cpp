#include<iostream>
const int MAX_SIZE = 20;

int main() {
    int numb;
    std::cin >> numb;
    int count[MAX_SIZE];
    int counts = 0;

    for (int i = 2; i <= numb; ++i)
    {
        bool isPrime = true;
        for (int j = 2; j < i; ++j)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
        {
            count[counts++] = i;
        }
    }

    for (int i = 2; i < counts ; i++)
    {
        bool isSuperPrime = true;
        for (int j = 2; j < counts ; j++)
        {
            if (count[i] % j == 0)
            {
                isSuperPrime = false;
                break;
            }
        }
        if (isSuperPrime )
        {
            std::cout << count[i] << " ";
        }
    }

    return 0;
}
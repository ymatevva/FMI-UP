#include<iostream>
const int MAX_SIZE = 20;

int main()
{
    int n;
    std :: cin >> n;

    int array[MAX_SIZE];
    int count[MAX_SIZE] = {0};

    for (int i = 0; i < n; ++i)
    {
        std :: cin >> array[i];
        count[array[i]]++;
    }

    int missingEl = -1;

    for (int i = 0; i <  MAX_SIZE; ++i)
    {
        if (count[i] == 0)//all positions were zeros but when we find element for ex 2 we increase the zero on position 2 with 1 so it is not 0 anymore
        {
            missingEl = i;
            break;
        }
    }

    std :: cout << missingEl;


    return 0;
}
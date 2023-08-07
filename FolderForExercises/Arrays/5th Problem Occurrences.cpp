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


    for (int i = 0; i < MAX_SIZE; ++i)
    {
        std :: cout << i << ": " << count[i]<< std :: endl;
    }


    return 0;
}
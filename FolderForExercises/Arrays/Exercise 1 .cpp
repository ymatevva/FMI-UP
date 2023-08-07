#include<iostream>
const int MAX_SIZE = 100;
bool isSym(int array[], int size)
{

    for (int i = 0; i < size ; ++i)
    {
        if (array[i]!=array[size - i - 1])
        {
            return false;
            break;
        }
    }
}
int main()
{
    int n;
    std :: cin >> n;

    int array[MAX_SIZE];
    for (int i = 0; i < n ; ++i) {
        std :: cin >> array[i];
    }

    std :: cout << "The arr is sym : " << std :: boolalpha << isSym(array, n);




    return 0;
}
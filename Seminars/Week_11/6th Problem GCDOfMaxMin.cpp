#include<iostream>
const int MAX_SIZE = 100;
int min, max;

void minAndMax(int arr[], int size)
{
    min = INT_MAX;
    max = INT_MIN;

    for (int i = 0; i < size; ++i)
    {

        if (arr[i]>max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
}

int GCD( int maximum, int minimum)
{
    if (minimum == 0)
    {
        return maximum;
    }

    return GCD(minimum,maximum%minimum);
}


int main()
{
    int n;
    std :: cin >> n;

    int arr[MAX_SIZE];

    for (int i = 0; i < n; ++i)
    {
        std :: cin >> arr[i];
    }

    minAndMax(arr,n);

    int gcd = GCD(min,max);
    std :: cout << gcd << std :: endl;



    return 0;
}
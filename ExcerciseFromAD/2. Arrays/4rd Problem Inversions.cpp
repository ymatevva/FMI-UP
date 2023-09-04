#include <iostream>
const int MAX_SIZE = 10;

int inversions(int arr[], int n)
{
    int inversionsCount = 0;
    for (int i = 0; i < n-1; ++i) {
        for (int j = i+1; j < n; ++j)
        {
            if (arr[i]>arr[j])
            {
                inversionsCount++;
            }
        }
    }
    return inversionsCount;
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


    std :: cout << inversions(arr,n) << std :: endl;



    return 0;
}
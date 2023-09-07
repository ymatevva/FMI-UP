#include <iostream>
const int MAX_SIZE = 50;
int minDeletedNum(const int arr[], int n)
{
    int minDel = INT_MAX;

    for (int i = 0; i < n-1; ++i)
    {

            if (arr[i+1] != arr[i]+1)
            {
                if (arr[i]+1 < minDel)
                {
                    minDel = arr[i]+1;
                }
            }
            else
                continue;
    }
    return minDel;
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

    int minDeletedNumber = minDeletedNum(arr,n);

   std :: cout << minDeletedNumber << std :: endl;


    return 0;
}
#include <iostream>
const int MAX_SIZE = 50;
int maxDeletedNum(const int arr[], int n)
{
    int maxDel = INT_MIN;

    for (int i = 0; i < n; ++i) {

            if (arr[i+1] != arr[i]+1)
            {
                if (arr[i]+1 > maxDel)
                {
                    maxDel = arr[i]+1;
                }
            }
    }
    return maxDel;
}
int main()
{
    int n;
    std :: cin >> n;

    int arr[MAX_SIZE];

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            std :: cin >> arr[i];
        }
    }

   std :: cout << maxDeletedNum(arr,n) << std :: endl;


    return 0;
}
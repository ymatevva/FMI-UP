#include <iostream>
const int MAX_SIZE = 50;

bool moreToDel(int arr[], int n)
{
    for (int i = 0; i < n ; ++i)
    {
        if (i==0||i==n)
        {
            continue;
        }
        if (arr[i]<arr[i+1]&&arr[i]<arr[i-1])
        {
            return true;
        }
    }
    return false;
}
void deleteElements(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        int index = -1;
        if (i == 0||i == n)
        {
            continue;
        }
        if (arr[i]<arr[i+1]&&arr[i]<arr[i-1])
        {
            index = i;
            for (int j = index; j < n; ++j) {
                arr[j]=arr[j+1];
            }
            n--;
        }
    }

    if (moreToDel(arr,n)) {
        deleteElements(arr, n);
    }
    else {
        for (int i = 0; i < n; ++i) {
            std::cout << arr[i] << " ";
        }
    }
}
int main()
{
    int n;
    std :: cin >> n;

    int arr[MAX_SIZE];

    for (int i = 0; i < n; ++i)
    {
        std::cin >> arr[i];
    }

    deleteElements(arr,n);

    return 0;
}
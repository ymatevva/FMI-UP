#include <iostream>
const int MAX_SIZE = 50;

bool checkFirstHalf(int arr[], int n)
{
    for (int i = 0; i <= n/2 ; ++i)
    {
        if (arr[i]!=arr[n/2-i])
            return false;
    }
    return true;
}
bool checkSecondHalf(int arr[], int n)
{
    int start = n/2 + 1 ;
    int end = n - 1;
    while(start<end)
    {
        if (arr[start]!=arr[end])
            return false;
        start++;
        end--;
    }
    return true;
}
bool checkPal(int arr[], int n)
{
    for (int i = 0; i < n; ++i) {
        if (arr[i]!=arr[n-i-1])
        return false;
    }
    return true;
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

    if (checkFirstHalf(arr,n) && checkSecondHalf(arr,n)|| checkPal(arr,n))
    {
        std :: cout << "Yes";
    }
    else
    {
        std::cout<<"no"<<std::endl;
    }
    

    return 0;
}
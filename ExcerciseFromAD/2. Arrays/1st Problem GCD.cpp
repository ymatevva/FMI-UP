#include<iostream>
const int MAX_SIZE = 50;
int maxNum(int arr[],int n)
{
    int maxEl = INT_MIN;
    for (int i = 0; i < n; ++i) {
        if (arr[i]>maxEl)
        {
            maxEl = arr[i];
        }
    }
    return maxEl;
}
int NOK(int arr[],int n)
{
    bool isForAll = true;
    int maxElement = maxNum(arr,n);
    int GCD=INT_MIN;
    for (int i = 1; i < maxElement; ++i) {
        for (int j = 0; j < n; ++j)
        {
            if (arr[j]%i!=0)
            {
                isForAll=false;
            }
        }
        if (isForAll)
        {
            if (i>GCD)
            {
                GCD=i;
            }
            isForAll=true;
        }
        else
        {
            isForAll=true;
            continue;
        }
    }
    return GCD;
}
int main()
{
    int n;
    std :: cin >> n;

    int arr[MAX_SIZE];
    for (int i = 0; i < n; ++i)
    {
        std::cin>>arr[i];
    }

  std::cout<<NOK(arr,n)<<std::endl;

    return 0;
}
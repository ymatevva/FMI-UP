#include<iostream>
const int MAX_SIZE = 60;
bool isInArray(int arr[], int element,int size)
{
    for (int i = 0; i < size ; ++i) {
        if (arr[i]==element)
        {
            return true;
        }
    }
    return false;
}

int maxElFound(int arrK[], int arrL[], int m, int n)
{
    int maxElFound = INT_MIN;

    for (int i = 0; i < m; ++i) {
        if (!isInArray(arrL,arrK[i],n)&&arrK[i] > maxElFound)
        {
            maxElFound = arrK[i];
        }
    }
    return maxElFound;
}

void add(int arr2[],int n,int elToAdd)
{
    n++;
    arr2[n-1] = elToAdd;
    for (int i = 0; i < n; ++i) {
        std :: cout << arr2[i] << " ";
    }
}

int main()
{
    int m;
    std::cin>>m;

    int arr[MAX_SIZE];
    for (int i = 0; i < m; ++i) {
        std::cin>>arr[i];
    }

    int n;
    std:: cin >> n;

    int arr2[MAX_SIZE];

    for (int i = 0; i < n; ++i)
    {
        std::cin>>arr2[i];
    }

    int ellToAdd = maxElFound(arr,arr2,m,n);

    add(arr2,n,ellToAdd);



    return 0;
}
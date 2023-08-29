#include <iostream>
const int MAX_SIZE = 100;

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

int maxElFound(int arrK[], int arrL[], int m,int n)
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

void deleteMaxEl(int arrK[],int &m,int &elForDel)
{

    int foundIndex = -1;
    for (int i = 0; i < m; ++i) {
        if (arrK[i]==elForDel)
        {
            foundIndex = i;
            break;
        }
    }
    if (foundIndex!=-1)
    {
        for (int i = foundIndex; i < m; ++i)
        {
            arrK[i]=arrK[i+1];
        }
    }
    m--;
}
int main()
{
    int m,n;
    std::cin >> m >> n;

    int arrK[MAX_SIZE];
    for (int i = 0; i < m; ++i)
    {
        std::cin>>arrK[i];
    }

    int arrL[MAX_SIZE];
    for (int i = 0; i < n; ++i)
    {
        std::cin>>arrL[i];
    }
    int elForDel = maxElFound(arrK,arrL,m,n);
    deleteMaxEl(arrK,m,elForDel);

    for (int i = 0; i < m ; ++i)
    {
        std::cout<<arrK[i]<<" ";
    }

    return 0;
}
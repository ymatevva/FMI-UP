#include <iostream>
#include<cassert>
//deleting an element on k position
  /*  int main()
    {
        const int MAX_SIZE = 20;

        int arr[MAX_SIZE];
        int n;
        std :: cin >> n;
        assert(n > 0 && n <= MAX_SIZE);
        //input the numbers
        for (int i = 0; i < n; i++)
        {
            std :: cin >> arr[i];
        }
        int  k;
        std :: cin >> k;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == arr[k])
            {
                continue;
            }
            else
                std :: cout << arr[i] << ", ";
        }

        return 0;
}*/
//the deleted element is not actually removed from the array but skipped during printing
int main()
{
    const int MAX_SIZE = 20;

    int arr[MAX_SIZE];
    int n;
    std :: cin >> n;
    assert(n > 0 && n <= MAX_SIZE);
    //input the numbers
    for (int i = 0; i < n; i++)
    {
        std :: cin >> arr[i];
    }

    int k;
    std :: cin >> k;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] ==arr[k])
        {
            for (int j = i; j < n - 1 ; j++)
            {
                arr[j] = arr[j+1];//to remove the element on this position
            }
            n--;
            break;
        }
    }

    for (int i = 0; i < n ; i++)
    {
        std :: cout << arr[i] << ", ";
    }
return 0;
}

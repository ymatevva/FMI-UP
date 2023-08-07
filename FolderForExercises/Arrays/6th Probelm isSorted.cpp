#include<iostream>
const int MAX_SIZE =  20;

bool isSorted(int array[], int size)
{

    for (int i = 0; i <  size; ++i)
    {
        if (array[i] >= array[i+1])
            return false;
    }
}


int main()
 {
    int n;
    std :: cin >> n;

    int array[MAX_SIZE];

     for (int i = 0; i < n; ++i)
     {
         std :: cin >> array[i];
     }

   std :: cout << std :: boolalpha << isSorted(array, n) << std :: endl;

    return 0;
 }



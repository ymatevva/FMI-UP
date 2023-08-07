#include<iostream>
const int MAX_SIZE = 100;
void deletion(int array[], int& size, int element)
{
    for(int i = element; i < size ; i++)
         {
             array[i] = array[i+1];
             if (array[i] == array[size-1]) {
                 array[i] = -1;
             }
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

    int deleteElement ;
    std :: cin >> deleteElement;

    deletion(array, n, deleteElement);
    for (int i = 0; i < n-1 ; ++i)
    {
        std :: cout << array[i] << " ";
    }




    return 0;
}
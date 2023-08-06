#include<iostream>
#include<cassert>

const int MAX_SIZE = 100;

void cycle(int* array, int n, int pos)
{
    int* temp = new int[pos];//to save only the last k elements(6 7 8)
    for (int i = 0; i < pos ; ++i)
    {
        temp[i] = array[n-pos+i];//storing 6 7 8 in the temp array
    }
    for (int i = n-1; i >= pos ; i--)
    {
      array[i]= array[i-pos]; // (_ _ _ 1 2 3 4 5)
    }

    for (int i = 0; i < pos; ++i)
    {
        array[i] = temp[i]; // then we get the values from the temp array and we have (6 7 8 1 2 3 4 5 )
    }

     delete[] temp;
}
/*void cycle(int* arr, int n, int pos)
{
    int* temp = new int[n]; // помощен масив

    for (int i = 0; i < n; i++)
        temp[(i + pos) % n] = arr[i];
    for (int i = 0; i < n; i++)
        arr[i] = temp[i];

    delete[] arr;
}
 */

void printArr(int* array, int size)
{
    for (int i = 0; i < size; ++i) {
        std :: cout << array[i] << " ";
    }
}
int main()
{
   int n;
   std :: cin >> n; //size of array

   int array[MAX_SIZE] ;

    for (int i = 0; i < n ; ++i) // input of the elements
    {
       std :: cin >> array[i];
    }

    int positions;
    std :: cin >> positions;
     assert(positions!=n);

    cycle(array,n,positions);
    printArr(array,n);


    return 0;
}
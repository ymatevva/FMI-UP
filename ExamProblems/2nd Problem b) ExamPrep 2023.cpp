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

void cycleMatr(int matrix[][MAX_SIZE], int n,int b[])
{
    for (int i = 0; i < n; ++i)
    {
        cycle(matrix[i],n,b[i]);// b is the number of positions to shift in each row
    }//1st row with 1 pos
    //2nd row with 2 pos and ...

}
int main()
{
   int n;
   std :: cin >> n; //size of array

   int matrix[MAX_SIZE][MAX_SIZE] ;

    for (int i = 0; i < n ; ++i) // input of the elements
    {
        for (int j = 0; j < n; ++j)
        {
            std :: cin >> matrix[i][j];
        }
    }

    int b[MAX_SIZE];
    for (int i = 0; i < n ; ++i)
    {
        std :: cin >> b[i];
    }
    cycleMatr(matrix,n,b);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n ; ++j) {
            std::cout<<matrix[i][j]<<" ";
        }
        std :: cout << std :: endl;
    }


    return 0;
}
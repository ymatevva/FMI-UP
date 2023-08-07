#include<iostream>
const int MAX_SIZE = 100;

void swap(int array[], int size)
{
    for (int i = 0; i < size/2; ++i)
    {
        if(i != 0)
        {
        int temp = array[i-1];
        array[i-1]= array[i];
        array[i] = temp;
        }
    }
}
int main()
{

    int size;
    std :: cin >> size ;


    int array[MAX_SIZE];
    for (int i = 0; i < size ; ++i)
    {
        std :: cin >> array[i];
    }

    swap(array,size);

    for (int i = 0; i < size; ++i) {
        std :: cout << array[i] << " ";
    }




    return 0;
}
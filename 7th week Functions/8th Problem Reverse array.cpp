#include<iostream>
//function to reverse the array
void reverseArr(int* array, int size)
{

    int tempArr[size]; // Create a temporary array to store the reversed elements

    for (int i = size - 1; i >= 0; i--)
    {
        tempArr[size - 1 - i] = array[i]; // Store the reversed elements in tempArray
    }

    for (int i = 0; i < size; i++)
    {
        array[i] = tempArr[i]; // Copy the reversed elements back to the original array
    }
}

int main()
{
    const int MAX_SIZE = 30;

    int size;
    std :: cin >> size;
    int array[MAX_SIZE];

    for (int i = 0; i < size ; i++)
    {
        std :: cin >> array[i];
    }

    reverseArr(array,size);

    for (int i = 0; i < size ; i++)
    {
        std :: cout << array[i] << " ";
    }

 return 0;
}
#include<iostream>
//intersection of two arrays
void intersectionArrays(int* array1, int size1, int* array2, int size2)
{
    for (int i = 0; i < size1; i++)
    {
        bool found = false;

        for (int j = 0; j < size2; j++)
        {
            if (array1[i] == array2[j])
            {
                found = true;
                array2[j] = -1;
                break;
            }
        }

        if (found)
        {
            bool printedBefore = false;
            for (int k = 0; k < i; k++) {
                if (array1[i] == array1[k])
                {
                    printedBefore= true;
                    break;
                }
            }
            if (!printedBefore)
            {
                std::cout << array1[i] << " ";
            }
        }
    }
}
int main()
{
    const int MAX_SIZE = 30;

   int size1;
   std:: cin >> size1;

   int arr1[MAX_SIZE];

    for (int i = 0; i < size1; i++)
    {
        std :: cin >> arr1[i];
    }

    int size2;
    std :: cin >> size2;

    int arr2[MAX_SIZE];

    for (int i = 0; i < size2 ; i++)
    {
        std :: cin >> arr2[i];
    }

    intersectionArrays(arr1,size1,arr2,size2);

    return 0;
}
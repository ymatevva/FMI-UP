#include<iostream>
constexpr int MAX_SIZE = 100;

void swap(int& a, int& b) 
{
    int temp = a;
    a = b;
    b = temp;
}

void sortArray(int* arr, unsigned int n)
{
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
                swap(arr[i], arr[j]);
        }
    }
}

int* concatSortedArrays(const int* arr1, const int* arr2, unsigned int n1, unsigned int n2) 
{
    int* res = new int[n1 + n2];
    unsigned int resInd = 0;

    for (size_t i = 0; i < n1; i++) {
        res[resInd++] = arr1[i];
    }

    for (size_t i = 0; i < n2; i++) {
        res[resInd++] = arr2[i];
    }

    sortArray(res, n1 + n2);
    return res;
}

void getInput(int* arr, unsigned int n) 
{
    for (size_t i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
}

void printArr(const int* arr, unsigned int length)
{
    for (size_t i = 0; i < length; i++)
    {
        std::cout << arr[i] << " ";
    }
}
int main() {
    unsigned int n1;
    std::cin >> n1;

    int arr1[MAX_SIZE];
    getInput(arr1, n1);

    unsigned int n2;
    std::cin >> n2;

    int arr2[MAX_SIZE];
    getInput(arr2, n2);

    int* result = concatSortedArrays(arr1, arr2, n1, n2);
    size_t resSize = n1 + n2;

    printArr(result, resSize);

    delete[] result;

    return 0;
}

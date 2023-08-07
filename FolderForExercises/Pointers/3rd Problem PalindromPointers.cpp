#include<iostream>
const int MAX_SIZE = 20;
bool isPalindrome(int array[], int n)
{
    int*ptrLeft = array;
    int*ptrRight = &array[n-1];

    for (int i = 0; i < n; ++i)
    {
        if (*ptrLeft != *ptrRight)
        {
            return false;
        }
        ptrLeft++;
        ptrRight--;
    }
   // return true;

}
int main()
{
    int n;
    std :: cin >> n;

    int array[MAX_SIZE];

    for (int i = 0; i < n ; ++i)
    {
        std :: cin >> array[i];
    }

  std :: cout << std :: boolalpha << isPalindrome(array,n) << std :: endl;


    return 0;
}
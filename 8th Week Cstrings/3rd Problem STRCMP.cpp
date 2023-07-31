#include<iostream>

int myStrCmp(const char *arr1, const char *arr2)
{
    while(*arr1)

    {
        if(*arr1!= *arr2)
        {
            break;
        }
        arr1++;
        arr2++;
    }
    return *arr1 - *arr2;
}
int main()
{
    char arr1[] ="hey";
    char arr2[] ="heyy";

   int ret = myStrCmp(arr1,arr2);

    if (ret > 0)
    {
        std::cout << arr1 << " is greater than " << arr2 << std :: endl;
    }
    else if(ret < 0)
    {
        std :: cout << arr2 << " is greater than " << arr1 << std :: endl;
    }
    else
    {
        std :: cout << "equal" << std :: endl;
    }

    return 0;
}
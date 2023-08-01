#include<iostream>
const int MAX_SIZE = 1024;

char toUpper(char c)
{
    if (c >= 'a' && c <= 'z')
        return c - 'a' +'A';
    else
        return c;
}
void myToUpper(char* arr)
{
    for (int i = 0; arr[i] != '\0' ; ++i)
    {
        arr[i] = toUpper(arr[i]);
    }
}

int main()
{
    char str[MAX_SIZE];
    std :: cin.getline(str,MAX_SIZE);
    //1st: to convert it to uppercase
    myToUpper(str);
    std :: cout << "Uppercase string: " << str << std :: endl;


    return 0;
}
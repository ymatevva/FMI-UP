#include<iostream>
const int MAX_SIZE = 1024;

char toLower(char c)
{
    if (c >= 'A' && c <= 'Z')
        return c - 'A' + 'a';
    else
        return c;
}

void myToLower( char *str)
{
    for (int i = 0; str[i] != '\0' ; ++i)
    {
        str[i] = toLower(str[i]);
    }
}
int main()
{
    char arr[MAX_SIZE];
    std :: cin.getline(arr, MAX_SIZE);
    //2nd Problem: to turn the char symbols to lower
    myToLower(arr);
    std :: cout << "Lowercase string: " << arr << std :: endl;


    return 0;
}
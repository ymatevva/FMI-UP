#include<iostream>
#include<cstring>
const int MAX_SIZE = 100;

void deletion(char str[], char symbol)
{
    int length = strlen(str);
    bool found = false;
    int currIndex = 0;

    for (int i = 0; i < length ; ++i)
    {

        if (str[i] != symbol)
        {
            found = true;
            str[currIndex]= str[i];//ако символа не е в низа то тогава слгаме елемента на първото място в новия низ и така...
            currIndex++;
        }

    }

    str[currIndex] = '\0';

    if (!found)
    {
        std::cout << "The symbol wasn't found" << std::endl;
    }
}
 void printArr(char str[])
 {
    int length = strlen(str);
     for (int i = 0; i < length ; ++i)
     {
         std :: cout << str[i] ;
     }
 }
int main()
{
   char str[MAX_SIZE];
   std :: cin >> str;

   char symbol;
   std :: cin >> symbol;
   deletion(str,symbol);
   printArr(str);


    return 0;
}
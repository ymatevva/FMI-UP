#include<iostream>
char *myStrCpy(char *destination, const char *source)
{
    if (destination == nullptr)
    {
        return nullptr;
    }

    char *ptr = destination;

    while (*source!=0)// докато не преместим целия source
    {
        *destination=*source;
        destination++;
        source++;
    }

    *destination = '\0';//след като го преместим слагаме и терминираща нула

    return ptr;
}
int main()
{
     char source[] = "Helllo FMI";
     char destination[30];

     std :: cout << myStrCpy(destination, source) << std :: endl;

     return 0;
}

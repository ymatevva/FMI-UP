#include<iostream>
#include<cstring>

const int MAX_SIZE = 1024;

void replace(char occurrence,char * array, char replacement)
{
    int length = strlen(array);
    for (int i = 0; i < length ; ++i)
    {
        if (array[i] == occurrence)
        {
           array[i] = replacement;
        }
    }
}

int main()
{
    char array[MAX_SIZE];
    std :: cin.getline(array,MAX_SIZE);

    char occurrence;
    std :: cin >> occurrence;

    char replacement;
    std :: cin >> replacement ;


    replace(occurrence, array, replacement);
    std :: cout << "The array with the replaced letter is: " << array << std :: endl;


    return 0;
}
#include <iostream>
const int MAX_SIZE = 50;

char toUpper(char symbol)
{
    if (symbol >= 'a' && symbol <= 'z')
        return symbol -'a' + 'A';
    else
    return symbol;
}
char toLower(char symbol)
{
    if (symbol >= 'A' && symbol <= 'Z')
        return symbol -'A' + 'a';
    else
        return symbol;

}

void transform(char words[])
{
    for (int i = 0; words[i] != '\0'; ++i)
    {
        if (words[i] >= 'a' && words[i] <= 'z')
        {
            words[i] = toUpper(words[i]);
        }
        else if (words[i] >= 'A' && words[i] <= 'Z')
        {
            words[i] = toLower(words[i]);
        }
    }
}

void printArray(char words[])
{
    for (int i = 0; words[i] != '\0'; ++i)
    {
        std :: cout << words[i] ;
    }
}



int main()
{
    char words[MAX_SIZE];
    std::cin.getline(words,MAX_SIZE);
    transform(words);
    printArray(words);


    return 0;
}

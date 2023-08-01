#include<iostream>
#include<cstring>

const int MAX_SIZE = 1024;

void eraseSymbol(char* word, char c)
{
    int length = strlen(word);
    bool found = false;
    int currIndex = 0;

    for (int i = 0; i < length; ++i)
    {
        if (word[i] != c)
        {
            found = true;
            word[currIndex] = word[i];
            currIndex++;
        }
    }
    word[currIndex] = '\0';

    if (!found)
    {
        std::cout << "The symbol wasn't found" << std::endl;
    }
}


int main()
{
    char word[MAX_SIZE];
    std :: cin >> word;

    char symbol;
    std :: cin >> symbol;

    //6th Problem To erase all occurrences of a given symbol

    eraseSymbol(word,symbol);
    std :: cout << "The word without the first occurrence of the symbol is: " << word << std :: endl;


    return 0;
}
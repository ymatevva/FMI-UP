#include<iostream>
#include<cstring>

const int MAX_SIZE = 1024;

void eraseSymbol(char* word, char c, int n)
{
    int length = strlen(word);
    bool found = false;
    int occurrence = 0;

    for (int i = 0; i < length; ++i)
    {
        if (word[i] == c)
        {
            found = true;
            occurrence++;
            if (occurrence == n)
            {
            for (int j = i; j < length - 1; ++j)
            {
                word[j] = word[j+1];
            }
            word[length - 1] = '\0';
            break;
            }
        }
    }

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

    int N;//Nth occurrence of the symbol
    std :: cin >> N;
    //5th Problem To erase the Nth occurrence of a given symbol

    eraseSymbol(word,symbol, N);
    std :: cout << "The word without the first occurrence of the symbol is: " << word << std :: endl;


    return 0;
}

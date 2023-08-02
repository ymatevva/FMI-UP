#include<iostream>
#include<cstring>
const int MAX_SIZE = 1024;


char toUpper(char c)
{
    if (c >= 'a' && c <= 'z')
    {
        return c - 'a' + 'A';
    }
    return c;
}
char toLower(char c)
{
    if (c >='A' && c <= 'Z')
    {
        return c -'A' + 'a';
    }
    return c;
}
const char punctuation[] =  {',','.','?','!','-',' ', '.','\0'};

bool isPunct(char c)
{
    for (int i = 0; i < strlen(punctuation) ; ++i)
    {
        if (c == punctuation[i])
        {
            return true;
        }
    }
    return false;
}

int main()
{

    char words[MAX_SIZE];
    std::cin.getline(words,MAX_SIZE);


    bool prevWasPunct = false;


    for (int i = 0; words[i] != '\0'; i++)
    {
        if (words[i] == '\n')
        {
            break;
        }

        bool isNewWord = (i == 0 );

        if (isPunct(words[i]))
        {
            prevWasPunct = true;
        }

        else
        {
            if (isNewWord && words[i] >= 'a' && words[i] <= 'z')
            {
                words[i] = toUpper(words[i]);
            }
            else if (prevWasPunct)
            {
                if (words[i] >= 'a' && words[i] <= 'z')
                {
                    words[i] = toUpper(words[i]);
                    prevWasPunct = false;
                }
            }
            else
            {
                if (words[i] >= 'A' && words[i] <= 'Z')
                {
                    words[i] = toLower(words[i]);
                    prevWasPunct = false;
                }
            }
        }
    }

    for (int i = 0; words[i] != '\0' ; ++i)
    {
        std :: cout << words[i] ;
    }

    return 0;
}
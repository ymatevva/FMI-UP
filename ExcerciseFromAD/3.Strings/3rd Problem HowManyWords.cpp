#include<iostream>
#include<cstring>
const int MAX_SIZE = 70;

int numWords(char *str)
{
    int count = 0;
    bool isTExt = false;

    for (int i = 0; i < strlen(str); ++i)
    {
        if (isalpha(str[i]))
        {
            isTExt = true;
        }
        if (isalpha(str[i]) && str[i+1]=='\0')
        {
            count++;
        }

        else if (!isalpha(str[i]))
        {
            if (isTExt)
            {
                count++;
                isTExt = false;
            }
            else
            {
                continue;
            }
        }
    }
    return count;
}
int main()
{
    char str[MAX_SIZE];
    std::cin.getline(str,MAX_SIZE);

    std :: cout << numWords(str) << std :: endl;

    return 0;
}

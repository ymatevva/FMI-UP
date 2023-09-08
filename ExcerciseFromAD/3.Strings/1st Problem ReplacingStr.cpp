#include <iostream>
#include <cstring>
const size_t  MAX_SIZE = 10000;

bool isPrefix(const char *pattern, const char*text)
{
    while(*text != '\0' && *pattern != '\0')
    {
        if (*text!=*pattern)
        {
            return false;
        }
        text++;
        pattern++;
    }
    return *pattern == '\0';//if it has reached the end of the pattern successfully then this will be true
}
void findAndReplace(char*text,const char*pattern , const char*replace)
{
    size_t replaceSize = strlen(replace);
    size_t patternSize = strlen(pattern);
    char* textBegin = text;
    char tempResult[MAX_SIZE];
    size_t tempResultIndex = 0;

    while(*text != '\0') {

        if (isPrefix(pattern, text)) {
            tempResult[tempResultIndex] = '\0';
            strcat(tempResult, replace);
            tempResultIndex + replaceSize;
            text += patternSize;
        } else {
            tempResult[tempResultIndex] = *text;
            text++;
        }

        tempResult[tempResultIndex] = '\0';
        strcpy(textBegin, tempResult);

    }
}

int main()
{
   char str[MAX_SIZE];
   std :: cin.getline(str,MAX_SIZE);


    char pattern[MAX_SIZE];
    std :: cin.getline(pattern,MAX_SIZE);


    char replace[MAX_SIZE];
    std :: cin.getline(replace,MAX_SIZE);

    findAndReplace(str,pattern,replace);

    std :: cout << str << std :: endl;

    return 0;
}
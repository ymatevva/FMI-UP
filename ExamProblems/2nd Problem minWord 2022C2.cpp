#include <iostream>
#include <cstring>
#include <cctype>
const int MAX_SIZE = 50;

const char* minWord(const char* str)
{
    const char* minWordPtr = nullptr;
    int minWordLength = 0;

    const char* currWordPtr = nullptr;
    int currWordLength = 0;

    for (int i = 0; str[i]!='\0'; ++i) {

        if (std::isalnum(str[i]))
        {
            if (currWordPtr == nullptr)
            {
                currWordPtr = &str[i];
            }
            currWordLength++;
        }
        else
        {
            if (currWordPtr!= nullptr)
            {
                if (minWordPtr== nullptr || strncmp(currWordPtr,minWordPtr,currWordLength)<0)
                {
                    minWordPtr = currWordPtr;
                    minWordLength = currWordLength;
                }
                currWordPtr = nullptr;
                currWordLength = 0;
            }
        }
    }

    if (minWordPtr !=nullptr)
    {
        return minWordPtr;
    }
   else
    {
       return str;
    }

}
int main()
{
    char str[MAX_SIZE];
    std :: cin.getline(str,MAX_SIZE);

   const char* smallestWord =  minWord(str);
   std::cout << smallestWord;
    return 0;
}
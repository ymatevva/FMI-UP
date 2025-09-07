#include<iostream>
#include<cstring>

const int MAX_SIZE = 100;
bool checkStr(char str[], int startIndex, const char* target)
{
    int targetLength = strlen(target);
    for (int i = 0; i < targetLength; ++i)
    {
        if (str[startIndex+ i ] != target[i])
            return false;
    }
    
    return true;
}



int main()
{
    char str1[MAX_SIZE];

    std::cin.getline(str1, MAX_SIZE);


   
    int countBegin = 0;
    int countEnd = 0;


    int length = strlen(str1);

    for (int i = 0; i < length; ++i)
    {
        if (str1[i] == 'b')
        {
            countBegin += checkStr(str1,i,"begin");
        }

        if (str1[i] == 'e')
        {
            countEnd += checkStr(str1,i,"end");
        }

    }

    std::cout << std :: boolalpha << (countBegin == countEnd) << std :: endl;

    return 0;
}

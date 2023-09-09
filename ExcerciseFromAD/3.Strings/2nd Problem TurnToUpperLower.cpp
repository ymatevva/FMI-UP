#include <iostream>
#include <cstring>
const int MAX_SIZE = 50;

void toUpper(char *str)
{
    int length = strlen(str);
    for (int i = 0; i < length; ++i) {
        if (str[i]>='a'&&str[i]<='z')
        {
            str[i] = str[i]-'a'+'A';
        }
    }
}

void toLower(char *str)
{
    int length = strlen(str);
    for (int i = 0; i < length; ++i) {
        if (str[i]>='A'&&str[i]<='Z')
        {
            str[i] = str[i]-'A'+'a';
        }
    }
}
int main()
{
    char str[MAX_SIZE];
    std::cin.getline(str,MAX_SIZE);
    
    toUpper(str);
    std::cout<<str<<std::endl;

    toLower(str);
    std::cout<<str<<std::endl;

    return 0;
}
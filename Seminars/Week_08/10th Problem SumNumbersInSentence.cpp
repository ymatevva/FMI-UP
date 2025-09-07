#include<iostream>
//#include<cstring>
const int MAX_SIZE = 1024;
bool isDigit(char c)
{
    if (c >= '0' && c <= '9')
    {
        return true;
    }
    return false;
}
int extractNumber(const char* str, int& index)
{
    int num = 0;
    while (isdigit(str[index])) //докато има цифри ги превръщаме в число
    {
        num = num * 10 + (str[index] - '0');
        index++;
    }
    return num;
}
int main()
{
    char words[MAX_SIZE];
    std::cin.getline(words,MAX_SIZE);

    int sum = 0;

    for (int i = 0; words[i] != '\0'; ++i)
    {
        if (isDigit(words[i]))//ако се появи цифра ползваме функцията по-горе  и после умираме
        {
            sum += extractNumber(words,i);
        }
    }

   std :: cout << "The sum of the digits in the sentence is: " << sum << std :: endl;


    return 0;
}


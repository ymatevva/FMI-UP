#include<iostream>
#include <cstring>
const int MAX_SIZE = 50;

void whiteSpace(char *& c)
{
    while(isspace(*c))
    {
        c++;
    }
}

int stoi(char *&c)
{
    int number = 0;
    while(*c >= '0' && *c <= '9')
    {
        number = number*10 + (*c - '0');
        c++;
    }
    return number;
}
int calculate(char *c, char operation, int preSum, int prevArgument)
{

    whiteSpace(c);
    int large =  stoi(c);
    whiteSpace(c);


















}













int main()
{
    char str[MAX_SIZE];
    std::cin.getline(str,MAX_SIZE);












    return 0;
}
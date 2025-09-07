#include <iostream>
const int MAX_SIZE = 50;
void reverse(const char *c)
{
    if (!*c)
    {
        return;
    }
    reverse(c + 1);
    std::cout << *c;
}

int main()
{
    char str[MAX_SIZE];
    std::cin.getline(str,MAX_SIZE);

    reverse(str);
}
#include <iostream>

int reversed(int number)
{
    int newNum = 0;
    while(number>0)
    {
        newNum = newNum*10 + number%10;
        number/=10;
    }
    return newNum;
}
int main()
{
    unsigned int n;
    std :: cin >> n;


    std :: cout << reversed(n) << std :: endl;









    return 0;
}
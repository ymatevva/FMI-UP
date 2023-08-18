#include <iostream>

int sumDigits(int number)//but recursive
{
    if(number == 0)
    {
        return 0;
    }
    return number%10 + sumDigits(number/10);
}

int main()
{

    int n ;
    std :: cin >> n;
    std :: cout << sumDigits(n);

    return 0;
}
#include <iostream>
//#include<cassert>
//програма, която проверява дали числото е палиндром

int main()
{
    int number;
    std :: cin >> number;
    if (number < 0)
    {
        std :: cout << "false" << std :: endl;
    }
    int reverse = 0;
    int originalNumber = number;
    while(number!=0)
    {
        reverse = reverse*10 + number%10;
        number/=10;
    }
    if (reverse == originalNumber)
    {
        std :: cout << "true" << std :: endl;
    }
    else
    {
        std :: cout << "false" << std :: endl;
    }
    return 0;
}
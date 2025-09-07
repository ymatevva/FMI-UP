#include <iostream>
//how to find if the second number is contained in the first(which is in this format ***)
int main()
{

    int num1, num2;
    std :: cin >> num1 >> num2;
    int lastDigit = num1%10;
    int secDigit = (num1/10)%10;
    int firstDigit = num1/100;
    if (lastDigit == num2||secDigit == num2||firstDigit == num2)
    {
        std :: cout << true << std :: endl;
    }
    else
    {
        std :: cout << false << std :: endl;
    }

    return 0;

}
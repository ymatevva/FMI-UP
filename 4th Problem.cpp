#include <iostream>
//програма, която проверява дали цифрите са подредени във възходящ ред

int main()
{

int num1, num2;
std :: cin >> num1;
int lastDigit = num1%10;
int secDigit = (num1/10)%10;
int firstDigit = num1/100;

    if (firstDigit <= secDigit)
    {
        if (secDigit <= lastDigit)
            std :: cout << "true" << std :: endl;
        else
            std :: cout << "false" << std :: endl;
    }
    else
    {
        std::cout << "false" << std::endl;
    }
  return 0;
}

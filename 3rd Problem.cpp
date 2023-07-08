#include<iostream>
//how to find if the number(***) contains digits which are the same

int main()
{

int num1, num2;
std :: cin >> num1;
int lastDigit = num1%10;
int secDigit = (num1/10)%10;
int firstDigit = num1/100;
    if (lastDigit == secDigit && lastDigit == firstDigit && secDigit == firstDigit)
    {
        std :: cout << "All digits are repeating." << std :: endl;
    }
    else if (lastDigit == secDigit )
    {
        std :: cout << "The second and the third digits are repeating." << std :: endl;
    }
    else if ( lastDigit == firstDigit )
    {
        std :: cout << "The third and the first digits are repeating." << std :: endl;
    }
    else if ( secDigit == firstDigit)
    {
        std :: cout << "The second and the first digits are repeating." << std :: endl;
    }
    else
    {
        std::cout << "There are no repeating digits." << std::endl;
    }

  return 0;
}

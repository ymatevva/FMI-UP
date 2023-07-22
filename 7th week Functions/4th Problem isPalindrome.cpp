#include<iostream>
bool isPal(int number)
{
    int revNum = 0 ;
   int originalNumber = number;
   while(originalNumber >= 1)
   {

       int remainder = originalNumber % 10;
       revNum = (revNum * 10 + remainder);
       originalNumber/=10;
   }

    if (number == revNum)
    {
        return true;
    }
    else {
        return false;
    }
}


int main()
{
    int number;
    std :: cin >> number;
    if (isPal(number))
        std :: cout << "The number is a palindrome." << std :: endl;
    else
        std :: cout << "The number is not a palindrome." << std :: endl;


    return 0;
}

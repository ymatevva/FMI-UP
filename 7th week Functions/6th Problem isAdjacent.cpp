#include<iostream>
//checking if a number is adjacent

bool isAdjacent(int number)
{
    int currDigit;
    int previousDigit;
    while(number > 0)
    {
        currDigit = number%10;
        previousDigit = (number/10)%10;

        if (currDigit == previousDigit)
        {
            return false;
        }
        number/=10;
    }
    return true;
}
int main()
{
   int number;
   std :: cin >> number;
    if (isAdjacent(number))
        std :: cout << "The number is adjacent." << std :: endl;
    else
        std :: cout << "The number is not adjacent." << std :: endl;

    return 0;
}
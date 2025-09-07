#include <iostream>
//finding if a number is a sum of two prime nums

bool isPrime(int number)
{    bool isPrime = true;
    if (number<=1)
        isPrime = false;
    else
    {
        for (int i = 2; i*i <= number ; i++) // optimization
        {
            if (number%i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }
    return isPrime;
}

int main()
{
    int num;
    std :: cin >> num;
    for (int i = 0; i <= num ; i++)
    {
        if (isPrime(i)&&isPrime(num - i) )
        {
            std :: cout << num << " = " << i << " + " << num - i << std :: endl;
            break;
        }
        else
        {

            std :: cout << std :: boolalpha << false << std :: endl;
            break;
        }
    }
    return 0;
}
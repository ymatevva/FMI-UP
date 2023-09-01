#include<iostream>

bool isPrime(int number)
{
    if(number<=1)
    {
        return false;
    }

    for (int i = 2; i < number; ++i)
    {
        if (number%i==0)
        {
            return false;
        }
    }

    return true;
}
bool divisors(int number,int kDivisors)
{
    int primeDivisors = 0;
    for (int i = 0; i < number ; ++i)
    {
        if (isPrime(i))
        {
            if (number%i==0)
            {
                primeDivisors++;
            }
        }
    }
    if (primeDivisors==kDivisors)
    {
        return true;
    }
    else
        return false;
}
int countNumsWithKPrimeDiv(int a,int b,int k)
{
    int count = 0;
    for (int i = a; i <=b ; ++i)
    {
        if (divisors(i,k))
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int a, b, k;
    std :: cin >> a >> b >> k;

    std :: cout << countNumsWithKPrimeDiv(a,b,k) << std :: endl;












    return 0;
}
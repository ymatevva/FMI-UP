#include <iostream>
int digitCount(int number)
{
    int count = 0;
    while(number > 0)
    {
        count++;
        number/=10;
    }
    return count ;
}

bool isPrefix(int n, int k)
{
    while(digitCount(n) > digitCount(k))
    {
        n/=10;
    }

    while(n>0 && k >0)
    {
        if (n%10 != k%10)
        {
            return false;
        }
        n/=10;
        k/=10;
    }

    return true;
}


int main()
{
    int n, k;
    std :: cin >> n >> k;

    std :: cout << std :: boolalpha << isPrefix(n,k) << std :: endl;

    return 0;
}

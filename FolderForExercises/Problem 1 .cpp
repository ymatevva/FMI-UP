#include<iostream>

int main()
{
    unsigned long long x;
    std :: cin >> x;

    int k ;
    std :: cin >> k;

    for (int i = 0; i < k; ++i)
    {
        if (x % 2 == 0)
        {
            x/=2;
        }
        else
        {
            3*x + 1;
        }
    }

    unsigned long long result = x;
    std :: cout << x << std ::endl;

    return 0;
}

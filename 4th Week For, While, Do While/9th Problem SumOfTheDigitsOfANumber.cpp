#include <iostream>
//finding the sum of the digits of a number
int main()
{
    int n;
    std :: cin >> n;
    int sum = 0;
    if(n<0)
    {
        n*=-1;
    }
    while(n>=1)
    {
        sum += n % 10;
        n = n/10;

    }

    std :: cout << sum << std :: endl;

    return 0;

}
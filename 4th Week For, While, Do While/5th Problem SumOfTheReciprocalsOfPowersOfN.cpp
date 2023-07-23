#include <iostream>
#include<cmath>// it can be done with pow from this library

double myPow(double n, double m)
{
    double result= 1;
    for (int i = 0; i < m ; i++)
    {
        result*=n;
    }
    return result;
}

int main()
{
    double n;
    std :: cin >> n;
    double result = 0.0;

    for (int i = 0; i <= n ; i++)
    {
        result += (1/myPow(i,i));
    }

    std :: cout << result << std :: endl;

    return 0;

}
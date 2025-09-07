#include <iostream>
//finding the gcd of two numbers
int main()
{
    int num1, num2;
    std :: cin >> num1 >> num2;

    int gcd;

    for (int i = 1; i <= num1 && i <= num2 ; i++)// it continues up to the smaller number from these two
    {
        if (num1 % i == 0 && num2 % i == 0)// both of them have to be divisioned by i
        {
            gcd = i;// in the end gcd is updated to the max gcd
        }
    }

    std :: cout << gcd << " ";
    return 0;
}
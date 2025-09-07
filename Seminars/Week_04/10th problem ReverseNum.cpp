#include <iostream>
//finding the reverse num
int main()
{
    int n;
    std :: cin >> n;
    // int originalNum = n;
    int reverse = 0;
    int remainder;
    while(n > 0)
    {
        remainder = n % 10;
        reverse = reverse*10 + remainder;
        n/=10;

    }

    std :: cout << reverse << std :: endl;
    //we can use this algorithm to find if a number is a palindrome
    // if( originalNum == reverse)
    //  std :: cout << palindrome << std :: endl;

    return 0;
}
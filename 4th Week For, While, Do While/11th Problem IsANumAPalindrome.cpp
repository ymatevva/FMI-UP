#include <iostream>
//finding the reverse num and finding if it is a palindorme
int main()
{
    int n;
    std :: cin >> n;
    int originalNum = n;
    int reverse = 0;
    int remainder;
    while(n > 0)
    {
        remainder = n % 10;
        reverse = reverse*10 + remainder;
        n/=10;

    }

    std :: cout << reverse << std :: endl;

    if( originalNum == reverse)
    {
        std::cout << " palindrome" << std::endl;
    }
    else if (originalNum != reverse || n < 0)
    {
        std :: cout << "not palindrome" << std :: endl;
    }

    return 0;
}
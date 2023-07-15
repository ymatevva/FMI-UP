#include <iostream>
//checking if it is prime
int main()
{
    int n;
    std :: cin >> n;

    bool isPrime = true;

    if (n<=1)
        isPrime = false;

    else
    {

            for (int j = 2; j < n ; j++)
            {
                if (n%j == 0)
                {
                    isPrime = false;
                    break;
                }
                else
                    continue;

            }

    }

    std :: cout << std :: boolalpha << isPrime << std :: endl;
    return 0;


}

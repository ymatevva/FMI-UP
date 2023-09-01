#include <iostream>
#include<cmath>

// Въвежда се неотрицателно число n.
// Да се отпечатат всички двойки прости числа, които са във вида 6k-1 и 6k+1.
// -решена без функции и решена с функции.

bool isPrime(int number)
{
    if (number <= 1)
        return false;
    for (int i = 2; i < sqrt(number); ++i)
    {
        if (number%i== 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    unsigned int n;
    std :: cin >> n;

    for (int i = 6; i < n; i+=6)
    {
        if (isPrime(i-1)&& isPrime(i+1))
        {
            std::cout << i-1 << " " << i + 1<<std :: endl;
        }
    }
    
    return 0;
}

#include<iostream>
//Напишете функция, която приема неотрицателни числа
// n и k и връща дали k е инфикс в n.
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

int reversed(int number)
{
    int rev = 0;
    while(number > 0)
    {
        rev = rev*10+number%10;
        number/=10;
    }
    return rev;
}
bool isInfix(int n, int k)
{
    int count = 0;
    while( digitCount(n)>2)
    {
        int copyOfN = n;
        int copyOfk = k;

       while(copyOfk > 0)
       {
           if (copyOfN%10 != copyOfk%10)
            {
                count++;
            }

            copyOfN /= 10;
            copyOfk /= 10;
        }

        if(count == 0)
        {
            return true;
        }

        count = 0;
        n /= 10;
    }
    return false;
}
int main()
{

    int n, k;
    std :: cin >> n >> k;

    int nWithoutLastDigit = n/10;

    std :: cout << std::boolalpha << isInfix(nWithoutLastDigit,k) << std :: endl;


    return 0;
}
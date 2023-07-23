#include <iostream>
// checking if the sum of the divisors of the numbers is equal to the original num
int main()
{
    int num1, num2;
    std :: cin >> num1 >> num2;
    int max, min;

    if(num1 > num2)
    { max = num1; min = num2;}
    else
    { max = num2; min = num1;}

    for (int i = min ; i <= max; i++)
    {
        int number = i;
        int sum = 0;

        for (int j = 1; j < number ; j++)
        {
            if (number % j == 0)
            {
                sum += j;
            }
        }

        if(sum==i)
        {
            std :: cout << i  << " is a perfect number " << std :: endl;
        }
    }
    return 0;
}
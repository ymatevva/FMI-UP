#include<iostream>
int countDigits(int number)
{
    int count = 0;
    while(number>0)
    {
        count++;
        number/=10;
    }
    return count;
}
bool areTheSame(int number)
{
    int curDigit = number%10;
    int prevDigit = (number/10)%10;
    while(  number>1)
    {
        if (curDigit!=prevDigit)
        {
            return false;
        }
        number/=10;
    }
    return true;
}
int main()
{
    int n;
    std :: cin >> n;


    std ::cout<< std::boolalpha<<areTheSame(n)<<std::endl;






    return 0;
}
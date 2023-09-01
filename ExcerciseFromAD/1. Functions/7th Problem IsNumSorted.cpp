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
bool isSortedAscending(int number)
{

    while(countDigits(number)>1)
    {
        int curDigit = number%10;
        int prevDigit = (number/10)%10;
        if (!(curDigit >= prevDigit))
        {
            return false;
        }
        number/=10;
    }
    return true;
}
bool isSortedDescending(int number)
{

    while(countDigits(number)>1)
    {
        int curDigit = number%10;
        int prevDigit = (number/10)%10;
        if (!(curDigit <= prevDigit))
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
    std::cout<<"Is Ascending " << std::boolalpha<<isSortedAscending(n)<<std::endl;
    std::cout<<"Is Descending " << std::boolalpha<<isSortedDescending(n)<<std::endl;

    return 0;
}
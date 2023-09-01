#include<iostream>
#include <cmath>
//Напишете функция, която дадено по подадено естествено число N, връща число, което е резултат от
//конкатенацията на обърнатото число на N с подаденото N.
int reversed(int num)
{
    int rev = 0;
    while(num>0)
    {
        rev = rev*10 + num%10;
        num/=10;
    }
    return rev;
}
int digitsCount(int number)
{
    int count = 0;
    while(number>0)
    {
        count++;
        number/=10;
    }
    return count;
}
int concatenate(int n)
{
    int nRev = reversed(n);
    int newNum = nRev* pow(10,digitsCount(n))+n;
    return newNum;
}
int main()
{
    int n;
    std :: cin >> n;
    std::cout << concatenate(n)<<std::endl;



    return 0;
}
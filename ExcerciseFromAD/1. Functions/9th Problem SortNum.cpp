#include<iostream>

int countDigitOccurences(int n, int digit)
{
    int count = 0;
    while(n>0)
    {
        if (n%10 == digit)
            count++;
        n/=10;
    }
    return count ;
}
int concatAtBack(int n,int digit,int howManyTimes)
{
    for (int i = 0; i < howManyTimes; ++i)
    {
        (n*=10)+=digit;
    }
    return n;
}
int sortedNum(int number)
{
   int result = 0;
    for (int i = 1; i <= 9; ++i)
    {
        int currDigitOccur = countDigitOccurences(number,i);
        result =  concatAtBack(result,i,currDigitOccur);
    }
    return result;
}

int main()
{

int n;
std :: cin >> n;

std::cout<<sortedNum(n)<<std::endl;

    return 0;
}
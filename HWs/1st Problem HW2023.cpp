#include<iostream>

bool isContained(int digit, int num)
{
    while(num > 0){

        int lastDigit = num%10;
        if (lastDigit == digit)
        {
            return true;
        }
        num/=10;
    }
    return false;
}
bool isWeaker(int n ,int k)
{
    while(n>0)
    {
        int lastDigit = n%10;
        if (!isContained(lastDigit,k)){
            return false;
        }
        n/=10;
    }
    return true;
}


int main()
{
    int n, k;
    std :: cin >> n >> k;



    if (isWeaker(n,k) && !isWeaker(k,n))
    {
        std :: cout << "First is weaker" << std :: endl;
    }
    else  if (!isWeaker(n,k) && isWeaker(k,n))
    {
        std :: cout << "Second is weaker" << std :: endl;
    }
    else  if (isWeaker(n,k) && isWeaker(k,n))
    {
        std :: cout << "Equal strength" << std :: endl;
    }
    else
    {
        std :: cout << "The numbers are not comparable" << std :: endl;
    }













    return 0;
}
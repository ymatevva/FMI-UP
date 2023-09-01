#include <iostream>
//is k suffix of n

int digitsCount (int number)
{
    int count = 0;
    while(number>0)
    {
        count ++;
        number/=10;
    }
    return count;
}
bool isSuffix(int n,int k)
{
   while(k>0)
   {
       if (n%10 != k%10)
           return false;
       n/=10;
       k/=10;
   }
    return true;
}

int main()
{
     int n,k;
     std :: cin >> n >> k;

     std :: cout << std :: boolalpha << isSuffix(n,k) << std :: endl;


    return 0;
}
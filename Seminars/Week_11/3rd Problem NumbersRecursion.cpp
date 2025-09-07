#include<iostream>

int sum(int n)
{
    int x = 1;
    int sum = 0;
    while(x <= n)
    {
       sum+=x;
       x+=3;
    }

    return sum;

}

int main()
{

   int n;
   std :: cin >> n;

   std :: cout << sum(n) << std :: endl;


   return 0;
}
/*
 * int sumWithStep(int n, int k, int startVal)
 * {
 *     if  (startVal > n)
 *     return 0;
 *
 *     return  startVal +  sumWithStep(n,startVal + k,k));
 *     }
 */
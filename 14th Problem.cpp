#include <iostream>
#include<cmath>
//finding the narcissistic numbers
//how many digits the number has
int digitsNum(int number)
{
    int cnt = 0;
   while(number >= 1)
   {
       cnt ++;
       number/=10;
   }
    return cnt;
}


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
        int number = i;// number is the thing that we change and i is the originalNum
        int sum = 0;
       while(number >= 1)
       {  
           int digit = number % 10;
           sum +=  pow( digit, digitsNum(i));
           number /= 10;
       }
        if(sum==i)
        {
            std :: cout << i << std :: endl;// we compare the sum of the digits raised to the power of the number of the digits to the original number
        }
    }
    return 0;
}

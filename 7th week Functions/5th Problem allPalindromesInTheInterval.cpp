#include<iostream>
// number of palindrome numbers
bool isPal(int number)
{
    int revNum = 0 ;
   int originalNumber = number;
   while(originalNumber >= 1)
   {

       int remainder = originalNumber % 10;
       revNum = (revNum * 10 + remainder);
       originalNumber/=10;
   }

    if (number == revNum)
    {
        return true;
    }
    else {
        return false;
    }
}

void allPalindromes(int min, int max)
{
    for (int i = min; i <= max ; i++)
    {
        if (isPal(i))
        {
            std :: cout << i << " ";
        }
    }
   std :: cout << '\n' ;
}
int main()
{
  int a, b;
  std :: cin >> a >> b;
  allPalindromes(a,b);

  return 0;
}

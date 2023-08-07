#include<iostream>
const int MAX_SIZE = 5;


int main()
{
   int n;
   std :: cin >> n;

   int number[MAX_SIZE];

    for (int i = 0; i < n ; ++i)
    {
        std :: cin >> number[i];
    }

    for (int i = n - 1; i >= 0 ; i--)
    {
        number[i]+=1;
        
        if (number[i]==10)
        {
            number[i]=0;
            if (i == 0)
            {
                number[i] = 1;
            }
        }
        else
            break;

     }

    for (int i = 0; i < n ; ++i)
    {
        std :: cout << number[i] << " ";
    }





    return 0;
}
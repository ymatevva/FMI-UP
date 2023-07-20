        #include <iostream>
        #include<cmath>
       //Смешно число е такова число, при което няма две съседни цифри с еднаква четност. Например числото 123 е смешно, но числото 235 не е.
       //Напишете програма, която по подадени две цели числа a и b намира сумата на числата в интервала [a, b], чийто сбор на цифрите е смешно число.

       bool isFunny(int number)
       {
           bool funny = true;
           int prevDigit = number % 10;
           number /= 10;

           while (number > 0)
           {
               int currentDigit = number % 10;
               if ((prevDigit % 2 == 0 && currentDigit % 2 == 0) || (prevDigit % 2 != 0 && currentDigit % 2 != 0))
               {
                   funny = false; // Found two adjacent digits with the same evenness/oddness
               }
               prevDigit = currentDigit;
               number /= 10;
           }
           return funny;
       }
       

       int main()
       {

        int a, b;
        std :: cin >> a >> b;


           int totalSum = 0;
           for (int i = a; i <= b ; i++)
           {
               int sum = 0;
               int num = i;

              while(num>0)
              {
                  sum+=num%10;
                  num/=10;
              }
              if(isFunny(sum))
              {
                  totalSum+=i;
              }
           }

         std::cout << totalSum << std :: endl;

            return 0;
        }

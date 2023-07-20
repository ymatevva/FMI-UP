        #include <iostream>
        #include<cmath>
        //Напишете програма, която по подадени две цели числа a и b намира броя на числата в интервала [a, b],
        // за които броят на различните им делители, без едно и самото число, е просто число.
        int divisors(int number)
        {
            int counter = 0;

            for (int i = 2; i*i <= number ; i++)
            {
                if (number%i == 0)
                {
                    counter ++;
                }
            }
            return counter;
        }
        bool isPrime(int number)
        {
           bool prime = true;

            if (number<2)
            {
                return false;
            }

            for (int i = 2; i < number; i++)
            {
                if (number%i == 0)
                {
                    return false;
                    break;
                }
            }
           return prime;

        }
        int main()
        {

           int a, b;
           std :: cin >> a >> b;

           int cnt = 0;
            for (int i = a; i <= b ; i++)
            {
                if(isPrime((divisors(i))) == true)
                {
                    cnt++;
                }
            }

            std :: cout << cnt << std :: endl;
            return 0;
        }

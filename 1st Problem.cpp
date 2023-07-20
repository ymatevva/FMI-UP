        #include <iostream>
        #include<cassert>
        //function to tell if it is a prime number
        bool isPrime(int number)
        {
            if (number <= 1)
            {
                return false;
            }
            for (int i = 2; i*i <= number ; i++)
            {
                if (number % i == 0)
                {
                    return false;
                }
            }
            return true;
        }
         int main()
         {
             int num;
             std :: cin >> num;

             if (isPrime(num))
             {
                 std :: cout << "The num is prime." << std :: endl;
             }
             else
                 std :: cout << "The num is not prime." << std :: endl;
             
            return 0;
        }

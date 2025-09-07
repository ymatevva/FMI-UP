#include <iostream>
//function to tell if it is a prime number and then function  to get the number of prime numbers
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
int numberOfPrimeNumbers(int size)
{
    const int MAX_SIZE = 50;

    int array[MAX_SIZE];
    int counter = 0;
    for (int i = 0; i < size ; i++)
    {
        std :: cin >> array[i];
        if (isPrime(array[i]))
            counter ++;

    }
    return counter;

}
int main()
{
    int size ;
    std :: cin >> size;

    std :: cout << "The number of prime numbers is: " << numberOfPrimeNumbers(size) << std :: endl;

    return 0;
}

#include<iostream>

unsigned int fib(unsigned int n)
{
	if (n == 0 || n == 1)//fib(0) and fib(1) are defined to be 1, as per the common Fibonacci sequence 
		return 1;

	return fib(n-1) + fib(n-2);
}
int main()
{
	int n;
	std::cin >> n;

	std::cout << fib(n);


	return 0;
}
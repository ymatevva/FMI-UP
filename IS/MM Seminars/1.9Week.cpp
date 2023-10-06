#include<iostream>
int digitsCount(int number)
{
	int count = 0;
	while (number > 0)
	{
		count++;
		number /= 10;
	}
	return count;
}
int newNumber(int n, int k)
{
	int count = 0;
	while (count < digitsCount(n))
	{
		int currDigit = n % 10;
		int newDigit = currDigit + k;
		int newNum = 
	}
}
int main()
{

	int n, k;
	std::cin >> n >> k;

	
	


	return 0;
}
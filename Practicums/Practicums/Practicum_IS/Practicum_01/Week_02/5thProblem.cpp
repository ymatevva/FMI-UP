#include<iostream>

int main()
{
	int number;
	std::cin >> number;

	int firstDigit = (number / 1000) % 10;
	int secDigit = (number / 100) % 10;
	int thirdDigit = (number / 10) % 10;
	int lastDigit = number % 10;

	int firstNewNum = 10 * firstDigit + lastDigit;
	int secNewNum = 10 * secDigit + thirdDigit;

	if (firstNewNum < secNewNum)
	{
		std::cout << firstNewNum << " < " << secNewNum << std::endl;
	}
	else if (firstNewNum > secNewNum)
	{
		std::cout << firstNewNum << " > " << secNewNum << std::endl;
	}
	else
	{
		std::cout << firstNewNum << " = " << secNewNum << std::endl;
	}










}
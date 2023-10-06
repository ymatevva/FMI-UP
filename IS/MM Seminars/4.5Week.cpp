#include<iostream>

int biggestDigit(int number)
{
	int biggest = INT_MIN;
	while (number > 0)
	{
       int currDigit = number % 10;

	   
	   if (currDigit > biggest)
	   {
		   biggest = currDigit;
	   }
	   number /= 10;
	}
	return biggest;
}

int main()
{

	int number;
	std::cin >> number;
	int firstDigit = number / 1000;
	if (firstDigit == biggestDigit(number) && firstDigit % 2 != 0)
	{
		std::cout << "yes" << std::endl;
	}
	else
		std::cout << "no" << std::endl;


	return 0;
}
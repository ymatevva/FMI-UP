#include<iostream>
//leap year
int main()
{
	int year;
	std::cin >> year;

	if ((year%400==0) || (year%4 == 0 && year % 100 != 0))
	{
		std::cout << "It is a leap year" << std::endl;
	}
	else
		std::cout << "It is not a leap year" << std::endl;



	return 0;
}
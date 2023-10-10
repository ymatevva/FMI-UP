#include<iostream>

int main()
{

	int year;
	std::cin >> year;
	bool isLeap = (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));
	std::cout << std::boolalpha << isLeap << std::endl;



	return 0;
}
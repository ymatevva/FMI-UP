#include<iostream>

int main()
{
	int num1, num2;
	std::cin >> num1 >> num2;

	bool isDivisor = (num2 % num1 == 0);
	std::cout << isDivisor << std::endl;

	return 0;
}
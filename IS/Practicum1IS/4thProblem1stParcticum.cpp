#include<iostream>

int main()
{
	int num1, num2;
	std::cin >> num1 >> num2;

	int product = num1 * num2;

	int lastDigit = product % 10;
	bool isEven = (lastDigit % 2 == 0);

	std::cout << product << " " << lastDigit << " " << isEven << std::endl;








	return 0;
}
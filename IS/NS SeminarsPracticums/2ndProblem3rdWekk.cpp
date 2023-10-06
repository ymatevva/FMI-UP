#include<iostream>

int main()
{
	int number;
	std::cin >> number;

	int newNum = 0;
	while (number > 0)
	{
		newNum = newNum * 10 + number % 10;
		number /= 10;
	}
	newNum += 1;
	std::cout << newNum;












	return 0;
}
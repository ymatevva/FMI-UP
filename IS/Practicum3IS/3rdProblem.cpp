#include<iostream>

int main()
{
	int n;
	std::cin >> n;

	int firstNum = 0;
	int secondNum = 1;
	std::cout << firstNum << std::endl;
	std::cout << secondNum << std::endl;

	int i = 0;
	int currentNum = 0;
	while (i < n - 2)
	{
		currentNum = secondNum + firstNum;
		std::cout << currentNum << std::endl;
		firstNum = secondNum;
		secondNum = currentNum;
		i++;
	}



	return 0;
}
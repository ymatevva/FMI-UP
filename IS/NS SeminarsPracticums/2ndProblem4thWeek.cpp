#include<iostream>


int main()
{

	int number;
	std::cin >> number;

	int reversed = 0;
	int originalNum = number;
	while (originalNum> 0)
	{
		reversed = reversed * 10 + originalNum % 10;
		originalNum /= 10;
	}

	bool isPal = (number == reversed);

	std::cout << std::boolalpha << isPal << std::endl;


	return 0;
}
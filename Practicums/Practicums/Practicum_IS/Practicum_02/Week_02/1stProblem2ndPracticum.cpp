#include<iostream>

int main()
{
	int a, b;
	std::cin >> a >> b;
	
	char operation;
	std::cin >> operation;

	switch (operation)
	{
	case '+':
	{
		std::cout << a + b << std::endl;
		break;
	}
	case '-':
	{
		std::cout << a - b << std::endl;
		break;
	}
	case '/':
	{
		std::cout << a / b << std::endl;
		break;
	}
	case '*':
	{
		std::cout << a * b << std::endl;
		break;
	}
	default:
	{
		std::cout << "Invalid input" << std::endl;
		break;
	}

	}







	return 0;
}
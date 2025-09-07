#include<iostream>

int main()
{
	char ch;
	std::cin >> ch;
	if (ch >= 97 && ch <= 122)
	{
		std::cout << "It is lowercase letter is corresponding to " << char(ch - 'a' + 'A') << std::endl;
	}
	else if (ch >= 65 && ch <= 90)
	{
		std::cout << "It is uppercase letter responding to " << char(ch - 'A' + 'a') << std::endl;
	}
	else 
	{
		std::cout << "It is invalid" << std::endl;
	}



	return 0;
}
#include<iostream>

int main()
{
	char ch;
	std::cin >> ch;

	if ((ch >= 'A' && ch <= 'Z') || ( ch >= 'a' && ch <= 'z'))
	{
		switch (ch)
		{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
			std::cout << "It is a vowel.\n";
			break;
		default:
	
			std::cout << "it is not a vowel.\n";
			break;
		

		}
	}
	else
		std :: cout << "It is not a symbol from the alphabet.\n";









	return 0;
}
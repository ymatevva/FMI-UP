#include <iostream>
const int MAX_SIZE = 50;

void toLower(char* str)
{
	if (str == nullptr)
	{
		return;
	}
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str = *str - 'A' + 'a';
		}
		str++;
	}
}
void toUpper(char* str)
{
	if (str == nullptr)
	{
		return;
	}
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 'a' + 'A';
		}
		str++;
	}
}
int main()
{
	char str[MAX_SIZE];
	std::cin.getline(str, MAX_SIZE);

	toLower(str);
	std::cout << str << std::endl;
	toUpper(str);
	std::cout << str << std::endl;
}

#include<iostream>
constexpr int MAX_SIZE = 100;

bool isInString(const char* str, char  ch)
{
	if (!str)
		return false;
	while (*str)
	{
		if (*str == ch)
			return true;

		str++;
	}
	return false;
}

bool isLower(char ch)
{
	return ch >= 'a' && ch <= 'z';
}

void changeString(char* str1, const char* str2)
{
	if (!str1 || !str2)
		return;

	while (*str1)
	{
		if (isLower(*str1) && isInString(str2, *str1))
			*str1 = *str1 - 'a' + 'A';

		str1++;
	}
}
int main()
{
	char str1[MAX_SIZE];
	std::cin.getline(str1, MAX_SIZE);


	char str2[MAX_SIZE];
	std::cin.getline(str2, MAX_SIZE);

	changeString(str1, str2);
	std::cout << str1;
	return 0;
}
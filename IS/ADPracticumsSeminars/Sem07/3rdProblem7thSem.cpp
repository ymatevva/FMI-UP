#include<iostream>

unsigned int convertFromString(char ch)
{
	if (ch >= '0' && ch <= '9')
	{
		return ch - '0';
	}
	return 10;
}

unsigned int stringToNumber(const char* str)
{
	unsigned int result = 0;
	while (*str != '\0')
	{
		result = result * 10 + convertFromString(*str);
		str++;
	}
	return result;
}
int main()
{
	char str[] = "1234";
	std::cout << stringToNumber(str);


	return 0;
}
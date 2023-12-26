#include<iostream>
constexpr int MAX_SIZE = 100;

unsigned int myStrLen(const char* str)
{
	if (!str)
		return 0;
	
	unsigned int count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}

bool isDigit(char ch)
{
	return ch >= '0' && ch <= '9';
}

unsigned int countDigits(const char* str)
{
	if (!str)
		return 0;

	unsigned int count = 0;
	while (*str)
	{
		if (isDigit(*str))
			count++;

		str++;
	}
	return count;
}

unsigned int countNumbers(const char* str)
{
	if (!str)
		return 0;

	unsigned int count = 0;
	while (*str)
	{
		if(isDigit(*str) && !isDigit(*(str+1)))
			count++;

		str++;
	}
	return count;
}

char* censoreNumbers(const char* str)
{
	if (!str)
		return nullptr;

	size_t newSize = myStrLen(str) - countDigits(str) + countNumbers(str);

	char* newStr = new char[newSize + 1];
	unsigned newInd = 0;

	newStr[newSize] = '\0';

	while (*str)
	{
		if (!isDigit(*str))
			newStr[newInd++] = *str;

		else if(!isDigit(*(str+1)))
			newStr[newInd++] = '*';

		str++;
	}
	return newStr;
}
int main()
{
	char str[MAX_SIZE];
	std::cin.getline(str, MAX_SIZE);

	char* result = censoreNumbers(str);

	std::cout << result;

	delete[] result;
	return 0;
}
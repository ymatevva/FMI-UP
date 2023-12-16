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
	bool isPrevDigit = false;

	while (*str)
	{
		if (isDigit(*str) && !isPrevDigit)
			count++;

	
		isPrevDigit = isDigit(*str);

		str++;
	}
	return count;
}

char* censoreNumbers(char* str)
{
	if (!str)
		return nullptr;

	size_t resSize = myStrLen(str) - countDigits(str) + countNumbers(str);

	char* res = new char[resSize + 1];
	size_t resIndex = 0;

	bool wasLastStar = false;

	while (*str)
	{
		if (!isDigit(*str))
			res[resIndex++] = *str;
		else if (!isDigit(*(str + 1)))
			res[resIndex++] = '*';

		str++;
	}
	res[resIndex] = '\0';
	return res;
}
int main()
{
	char str[MAX_SIZE];
	std::cin.getline(str, MAX_SIZE);

	char* censored = censoreNumbers(str);
	std::cout << censored;

	delete[] censored;

	return 0;
}
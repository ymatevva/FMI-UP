#include<iostream>
constexpr int MAX_SIZE = 100;

bool isCapital(char ch)
{
	return ch >= 'A' && ch <= 'Z';
}

bool isLower(char ch)
{
	return ch >= 'a' && ch <= 'z';
}

unsigned int countLowerLetters(const char* str)
{
	if (!str)
		return 0;

	unsigned int count = 0;
	while (*str)
	{
		if (isLower(*str))
			count++;

		str++;
	}
	return count;
}

unsigned int countCapitalLetters(const char* str)
{
	if (!str)
		return 0;

	unsigned int count = 0;
	while (*str)
	{
		if (isCapital(*str))
			count++;

		str++;
	}
	return count;
}

void divideLowerAndCapital(const char* str)
{
	if (!str )
		return;

	size_t lowerSize = countLowerLetters(str);
	size_t capitalSize = countCapitalLetters(str);

    char* lower = new char[lowerSize + 1];
	char* capital = new char[capitalSize + 1];

	unsigned int lowerInd = 0;
	unsigned int capInd = 0;

	while (*str)
	{
		if (isLower(*str))
			lower[lowerInd++] = *str;

		if (isCapital(*str))
			capital[capInd++] = *str;

		str++;
	}

	lower[lowerInd] = '\0';
	capital[capInd] = '\0';

	std::cout << lower << std::endl;
	std::cout << capital << std::endl;

	delete[] lower;
	delete[] capital;
}
int main()
{
	char str[MAX_SIZE];
	std::cin.getline(str, MAX_SIZE);

	divideLowerAndCapital(str);
	
	return 0;
}
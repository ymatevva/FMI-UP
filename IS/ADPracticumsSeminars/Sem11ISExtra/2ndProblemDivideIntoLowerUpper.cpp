#include<iostream>
constexpr int MAX_SIZE = 100;

bool isLower(char ch)
{
	return ch >= 'a' && ch <= 'z';
}

bool isUpper(char ch)
{
	return ch >= 'A' && ch <= 'Z';
}
		
void countLowerAndUpper(const char* str, unsigned int& lowerCount, unsigned int& upperCount)
{
	if (!str)
		return;

	lowerCount = 0;
	upperCount = 0;

	while (*str)
	{
		if (isLower(*str))
			lowerCount++;

		else if (isUpper(*str))
			upperCount++;

		str++;
	}
}

void divideIntoLowerAndUpper(const char* str, char*& lower, char*& upper)
{
	if (!str)
		return;

	unsigned int lowerSize = 0;
	unsigned int upperSize = 0;

	countLowerAndUpper(str, lowerSize, upperSize);

	lower = new char[lowerSize + 1];
	upper = new char[upperSize + 1];

	unsigned lowerInd = 0;
	unsigned upperInd = 0;

	lower[lowerSize] = '\0';
	upper[upperSize] = '\0';

	while (*str)
	{
		if (isLower(*str))
			lower[lowerInd++] = *str;

		else if (isUpper(*str))
			upper[upperInd++] = *str;

		str++;
	}
}

int main()
{
	char str[MAX_SIZE];
	std::cin.getline(str, MAX_SIZE);

	char* lower = nullptr;
	char* upper = nullptr;

	divideIntoLowerAndUpper(str, lower, upper);

	std::cout << lower << std::endl;
	std::cout << upper << std::endl;

	delete[] lower;
	delete[] upper;
}

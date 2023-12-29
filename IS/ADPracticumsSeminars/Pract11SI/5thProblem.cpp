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

unsigned int countLower(const char* str)
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


unsigned int countUpper(const char* str)
{
	if (!str)
		return 0;

	unsigned int count = 0;
	while (*str)
	{
		if (isUpper(*str))
			count++;

		str++;
	}
	return count;
}

char* concatStrings(const char* str1, const char* str2)
{
	if (!str1 || !str2)
		return nullptr;


	size_t lowerLettersCount = countLower(str1);
	size_t upperLettersCount = countUpper(str2);

	char* concatString = new char[lowerLettersCount + upperLettersCount + 1];
	unsigned concatInd = 0;

	while (*str1)
	{
		if (isLower(*str1))
			concatString[concatInd++] = *str1;

		str1++;
	}

	while (*str2)
	{
		if (isUpper(*str2))
			concatString[concatInd++] = *str2;

		str2++;
	}

	concatString[concatInd] = '\0';

	return concatString;
	delete[] concatString;
}
int main()
{
	char str1[MAX_SIZE];
	std::cin.getline(str1, MAX_SIZE);

	char str2[MAX_SIZE];
	std::cin.getline(str2, MAX_SIZE);

	char* result = concatStrings(str1, str2);
	std::cout << result << std::endl;

	delete[] result;
	return 0;
}
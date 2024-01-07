#include<iostream>
constexpr int MAX_SIZE = 100;

unsigned int countSymbolOccurances(const char* str, char ch)
{
	if (!str)
		return 0;

	unsigned int count = 0;
	while (*str)
	{
		if (*str == ch)
			count;

		str++;
	}
	return count;
}

unsigned int getEndOfTokenInd(const char* str, unsigned ch)
{
	if (!str)
		return 0;

	for (size_t i = 0;; i++)
	{
		if (str[i] == '\0' || str[i] == ch)
			return i;
	}
	return -1;
}

void copyNChars( const char* source,char* dest, unsigned count)
{
	for (size_t i = 0; i < count; i++)
		dest[i] = source[i];
}

char** splitString(const char* str, char separator)
{
	if (!str)
		return nullptr;

	unsigned resSize = countSymbolOccurances(str, separator) + 2;
	char** result = new char* [resSize];
	result[resSize - 1] = nullptr;
	unsigned int resInd = 0;

	while (*str)
	{
		int sepInd = getEndOfTokenInd(str, separator);

		char* currentToken = new char[sepInd+1];
		currentToken[sepInd] = '\0';

		copyNChars(str, currentToken, sepInd);
		str += sepInd;

		result[resInd++] = currentToken;

		if (*str == separator)
			str++;
	}
	return result;
}

void printSplit(char** tokens)
{
	while (*tokens)
	{
		std::cout << *tokens << std::endl;
		tokens++;
	}

}

void freeSplit( char** str)
{
	if (!str)
		return;

	for (size_t i = 0; str[i] != nullptr; i++)
		delete[] str[i];
	
	delete[] str;
}
int main()
{
	char str[MAX_SIZE];
	std::cin.getline(str, MAX_SIZE);

	char symbol;
	std::cin >> symbol;

	char** split = splitString(str, symbol);
	printSplit(split);
	freeSplit(split);

	return 0;
}
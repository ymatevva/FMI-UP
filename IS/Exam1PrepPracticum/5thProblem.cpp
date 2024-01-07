#include<iostream>
constexpr int MAX_SIZE = 100;

unsigned int countSymbolOcc(const char* str, char token)
{
	if (!str)
		return 0;
	unsigned int count = 0;
	while (*str)
	{
		if (*str == token)
			count++;
		str++;
	}
	return count;
}

int getTokenPos(const char* str, char token)
{
	if (!str)
		return 0;
	for (size_t i = 0; ; i++)
	{
		if (str[i] == token || str[i] == '\0')
			return i;
	}
	return -1;
}

void copyNChars(const char* source, char* dest, int N)
{
	if (!source || !dest)
		return;
	for (size_t i = 0; i < N; i++)
		dest[i] = source[i];
}

char** splitString(const char* str, char token)
{
	if (!str)
		return nullptr;

	size_t resSize = countSymbolOcc(str, token) + 2;
	unsigned int resInd = 0;
	char** result = new char* [resSize];
	result[resSize - 1] = nullptr;

	while (*str)
	{
		int tokPos = getTokenPos(str, token);
		char* word = new char[tokPos + 1];
		word[tokPos] = '\0';
		copyNChars(str, word, tokPos);

		result[resInd++] = word;
		str += tokPos;

		if (*str == token)
			str++;
	}
	return result;
}

void printSplit(char** str)
{
	while (*str)
	{
		std::cout << *str << std::endl;
		str++;
	}
}

void freeSplit(char** str)
{
	if (!str)
		return;
	for (size_t i = 0; str[i] != nullptr; i++)
	{
		delete[] str[i];
	}
	delete[] str;
}
int main()
{
	char str[MAX_SIZE];
	std::cin.getline(str, MAX_SIZE);

	char symbol;
	std::cin >> symbol;

	char** result = splitString(str, symbol);

	printSplit(result);
	freeSplit(result);
	return 0;
}
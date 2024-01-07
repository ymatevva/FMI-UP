#include<iostream>
constexpr int MAX_SIZE = 100;

bool wordSymbol(char ch)
{
	return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
}

unsigned int getWordsCount(const char* str)
{
	if (!str)
		return 0;

	unsigned int count = 0;
	while (*str)
	{
		if (wordSymbol(*str) && !wordSymbol(*(str + 1)))
			count++;

		str++;
	}
	return count;
}

unsigned getSize(const char* str)
{
	if (!str)
		return 0;

	unsigned int count = 0;
	unsigned int space = 0;
	unsigned int countWords = getWordsCount(str);

	while (*str && wordSymbol(*str))
	{
		count++;
		str++;
	}

	while (*str)
	{
		if (wordSymbol(*str) && !wordSymbol(*(str + 1)))
			space++;

		if (space == countWords - 1 && wordSymbol(*str))
			count++;

		str++;
	}
	return count;
}

unsigned int mySTrLen(const char* str)
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

char* concatFirstAndLast(const char* str)
{
	if (!str)
		return nullptr;

	size_t newSize = getSize(str) + 2;
	char* result = new char[newSize];

	unsigned int resInd = 0;
	result[newSize - 1] = '\0';

	unsigned int space = 0;
	unsigned int countWords = getWordsCount(str);

	size_t revInd = newSize - 2;

		while (wordSymbol(*str) )
		{
			result[resInd++] = *str;
	     	str++;
	    }
	
		result[resInd++] = ' ';

		size_t lengthStr = mySTrLen(str);
		for (int i = lengthStr-1; i >= 0 && wordSymbol(str[i]); i--)
		{
			result[revInd--] = str[i];
		}

	return result;
}

int main()
{
	char str[MAX_SIZE];
	std::cin.getline(str, MAX_SIZE);

	char* res = concatFirstAndLast(str);
	std::cout << res << std::endl;

	delete[] res;
	return 0;
}
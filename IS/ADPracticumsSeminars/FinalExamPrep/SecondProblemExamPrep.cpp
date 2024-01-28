#include<iostream>
constexpr int MAX_SIZE = 100;

unsigned int countOccurences(const char* str, char ch)
{
	if (!str)
		return 0;
	unsigned int count = 0;
	while (*str)
	{
		if (*str == ch)
			count++;

		str++;
	}
	return count;
}

bool isOdd(int n)
{
	return n % 2 != 0;
}

bool isPalindrome( char* str)
{
	if (!str)
		return false;
	unsigned int count = 0;
	char* strBeg = str;
	while (*strBeg)
	{
		if (isOdd(countOccurences(str, *strBeg)))
		count++;

		if (count > 1)
			return false;

		strBeg++;
	}
	return true;
}

bool isCapital(char ch)
{
	return ch >= 'A' && ch <= 'Z';
}

void turnIntoLowerLetters(char* str)
{
	while (*str)
	{
		if (isCapital(*str))
			*str = *str - 'A' + 'a';

		str++;
	}
}

bool wordSymbol(char ch)
{
	return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}
unsigned int countLetters(const char* str)
{
	if (!str)
		return 0;

	unsigned int count = 0;
	while (*str)
	{
		if (wordSymbol(*str))
			count++;

		str++;
	}
	return count;
}

bool isPalAfterTransformation(char* str)
{
	if (!str)
		return false;

	size_t newSize = countLetters(str);
	char* newStr = new char[newSize + 1];
	unsigned int newInd = 0;
	turnIntoLowerLetters(str);

	while (*str)
	{
		if (wordSymbol(*str))
			newStr[newInd++] = *str;

		str++;
	}

	newStr[newInd] = '\0';
	return isPalindrome(newStr);

	delete[] newStr;

}
int main()
{
	char str[MAX_SIZE];
	std::cin.getline(str, MAX_SIZE);

	std::cout << isPalAfterTransformation(str);

	return 0;
}

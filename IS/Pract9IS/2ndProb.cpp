#include<iostream>
constexpr int MAX_SIZE = 1024;

bool isAlphabetical(const char ch)
{
	return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

unsigned int countSymbolOcc(const char* text, char ch)
{
	unsigned int count = 0;

	while (*text)
	{
		if(*text == ch - 'A' + 'a' || *text == ch - 'a' + 'A' || *text == ch)
		count++;

		text++;
	}
	return count;
}

unsigned int lettersCount(const char* text)
{
	unsigned int count = 0;
	while (*text)
	{
		if (isAlphabetical(*text))
			count++;

		text++;
	}
	return count;

}

unsigned int myStrLen(const char* str)
{
	unsigned int count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}

bool areAnagrams(char* str1,  char* str2)
{
	if (lettersCount(str1) != lettersCount(str2))
		return false;

	char* str1Begin = str1;
	char* str2Begin = str2;

	while (*str1)
	{
		if (isAlphabetical(*str1))
		{
			if (countSymbolOcc(str1Begin, *str1) != countSymbolOcc(str2Begin, *str1))
				return false;
		}

		str1++;
	}
	return true;
}
int main()
{
	char str1[MAX_SIZE];
	std::cin.getline(str1, MAX_SIZE);

	char str2[MAX_SIZE];
	std::cin.getline(str2, MAX_SIZE);

	std::cout << std::boolalpha << areAnagrams(str1, str2);

	return 0;
}
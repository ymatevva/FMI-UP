#include<iostream>
const int MAX_SIZE = 700;

bool isAlphabeticalNumericalSymbol(const char str)
{
	if (str >= 'A' && str <= 'Z' || str >= 'a' && str <= 'z' || str >= '0' && str <= '9')
	{
		return true;
	}
	return false;
}
int myStrNCmp(const char* str1, const char* str2, int length)
{
	if (str1 == nullptr || str2 == nullptr)
	{
		return 0;
	}
	while (length > 0)
	{
		if (*str1 < *str2)
		{
			return - 1;
		}
		else if (*str1 > *str2)
		{
			return 1;
		}

		str1++;
		str2++;
		length--;
	}
		return 0;
}
void myStrCpy(char* dest, const char* source)
{
	if (source == nullptr || dest == nullptr)
	{
		return;
	}
	while (*source != '\0')
	{
		*dest = *source;
		dest++;
		source++;
	}
	*dest = '\0';
}
char toLower(const char ch)
{
	if (ch >= 'A'&& ch <= 'Z')
	{
		return ch - 'A' + 'a';
	}
	return ch;
}
int myStrCmp(const char* str1, const char* str2)
{
	if (str1 == nullptr || str2 == nullptr)
	{
		return 0;
	}
	while (*str1 != '\0' &&  *str2 != '\0')
	{
		if (*str1 < *str2)
		{
			return -1;
		}
		else if (*str1 > *str2)
		{
			return 1;
		}
		str1++;
		str2++;
	}
	if (*str1 == '\0' && *str2 == '\0')
	{
		return 0;
	}
	else
		return *str1 == '\0' ? '-1' : '1';
}
void smallestLex(char* str, char* result)
{
	char minWord[MAX_SIZE] = "";
   

	char* strBegin = str;

	while (*strBegin != '\0')
	{	 
		char currentWord[MAX_SIZE] = "";
		if (isAlphabeticalNumericalSymbol(*strBegin))
		{
			int i = 0;
			while (isAlphabeticalNumericalSymbol(*strBegin))
			{
				currentWord[i] = toLower(*strBegin);
				i++;
				strBegin++;
			}
			currentWord[i] = '\0';

			if (*minWord == 0 || myStrCmp(minWord, currentWord) > 0)
			{
				myStrCpy(minWord, currentWord);
			}
		}
		strBegin++;
	}
	if (*minWord != '\0')
	{
		myStrCpy(result, minWord);
	}
}
int main()
{
	char str[MAX_SIZE];
	std::cin.getline(str, MAX_SIZE);

	char result[MAX_SIZE] = "";

	smallestLex(str, result);

	if (*result!='\0')
	{
		std::cout << result << std::endl;
	}


	return 0;
}
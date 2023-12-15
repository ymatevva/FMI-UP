#include<iostream>
constexpr int MAX_SIZE = 50;

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

bool isPrefix(const char* str, const char* word)
{
	if (!str || !word)
		return false;

	while (*str && *word)
	{
		if (*word != *str)
			return false;
		word++;
		str++;
	}
	return true;
}


bool isAlphabetical(char ch)
{
	return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

void turnToLower(char* str)
{
	if (!str)
		return;

	while (*str)
	{
		if (isAlphabetical(*str) && (*str >= 'A' && *str <= 'Z'))
			*str = *str - 'A' + 'a';
		str++;
	}
}

unsigned int countWordOcc(const char* text, const char* word)
{
	if (!text)
		return 0;

	size_t textLen = myStrLen(text);
	size_t wordLen = myStrLen(word);

	unsigned int count = 0;

	while (wordLen <= textLen)
	{
		if (isPrefix(text, word))
		{
			if (!isAlphabetical(*(text - 1)))
				count++;
		}

		text++;
		textLen--;
	}
	return count;
}

void myStrCpy(char* dest, const char* source)
{
	if (!dest || !source)
		return;

	while (*dest && *source)
	{
		*dest = *source;
		dest++;
		source++;
	}
	*dest = '\0';
}

void mostCommonWord(char* str)
{
	if (!str)
		return;

	char mostOccuredWord[MAX_SIZE];
	unsigned int mostOcc = 0;

	size_t mostOcIndex = 0;

	char* strBeg = str;

	while (*strBeg)
	{
		char currWord[MAX_SIZE] = { 0 };
		size_t currIndex = 0;

		while (isAlphabetical(*strBeg))
		{
			currWord[currIndex++] = *strBeg;
			strBeg++;
		}

		currWord[currIndex] = '\0';
		if (currIndex > 0)
		{
			size_t currWordOc = countWordOcc(str, currWord);
			if (currWordOc > mostOcc)
			{
				myStrCpy(mostOccuredWord, currWord);
				mostOcc = currWordOc;
			}
		}

		strBeg++;
	}

	myStrCpy(str, mostOccuredWord);
}

int main()
{
	char str[MAX_SIZE];
	std::cin.getline(str, MAX_SIZE);

	turnToLower(str);
	mostCommonWord(str);
	std::cout << str;


	return 0;
}
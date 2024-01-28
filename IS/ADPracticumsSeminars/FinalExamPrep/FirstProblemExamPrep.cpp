#include<iostream>
constexpr int MAX_SIZE = 100;

unsigned int countCharOcc(const char* str, char ch)
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

bool canFormPalindrome( char* str)
{
	if (!str)
		return false;

	unsigned int count = 0;
	char* strBeg = str;

	while (*strBeg)
	{
		if (isOdd(countCharOcc(str, *strBeg)))
			count++;

		if (count > 1)
			return false;

		strBeg++;
	}

	return true;
}

unsigned int countTokenOcc(const char* str, char token)
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

int getTokPos(const char* str, char token)
{
	if (!str)
		return -1;
	for (size_t i = 0; ; i++)
	{
		if (str[i] == '\0' || str[i] == token)
			return i;
	}
	return -1;
}

void copyNChars(const char* source, char* dest, unsigned count)
{
	for (size_t i = 0; i < count; i++)
	{
		dest[i] = source[i];
	}
}

char** splitAboutToken(const char* str, char token)
{
	if (!str)
		return nullptr;

	size_t newSize = countTokenOcc(str,token) + 2;
	char** splittedWords = new char*[newSize];
	splittedWords[newSize - 1] = nullptr;
	unsigned wordsInd = 0;

	while (*str)
	{
		int tokPos = getTokPos(str, token);
	
		char* word = new char[tokPos + 1];
		word[tokPos] = '\0';
		copyNChars(str, word, tokPos);

		str += tokPos;
		splittedWords[wordsInd++] = word;

		if (*str == token)
			str++;
	}
	return splittedWords;
}

unsigned int countPalindromes(char** splittedWords)
{
	unsigned int count = 0;
	while (*splittedWords)
	{
		if (canFormPalindrome(*splittedWords))
			count++;

		splittedWords++;
	}
	return count;
}

void free(char** splittedWords)
{
	for (size_t i = 0; splittedWords[i] != nullptr; i++)
	{
		delete[] splittedWords[i];
	}
	delete[] splittedWords;
}
int main()
{
	char str[MAX_SIZE];
	std::cin.getline(str, MAX_SIZE);


	char token;
	std::cin >> token;

	char** res = splitAboutToken(str, token);
	std :: cout << countPalindromes(res);

	free(res);
	return 0;
}

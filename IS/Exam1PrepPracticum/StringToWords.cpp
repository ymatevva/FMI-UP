#include<iostream>
constexpr int MAX_SIZE = 100;

bool wordSymbol(char ch)
{
	return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
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

void skipIntervals(const char*& str)
{
	if (!str)
		return;
	while (*str && !wordSymbol(*str))
		str++;
}

char* getNextWord(const char*& str)
{
	if (!str)
		return nullptr;

	unsigned int ind = 0;
	while (wordSymbol(str[ind]))
	{
		ind++;
	}

	char* word = new char[ind + 1];
	word[ind] = '\0';

	for (size_t i = 0; i < ind; i++)
		word[i] = str[i];

	str += ind;
	return word;
}

char** tokenize(const char* str, size_t& size)
{
	if (!str)
		return nullptr;

	size_t wordsCount = getWordsCount(str);
	unsigned int currWordInd = 0;
	char** words = new char* [wordsCount];

	while (*str)
	{
		skipIntervals(str);
		char* currWord = getNextWord(str);
		words[currWordInd++] = currWord;
	}

	size = wordsCount;
	return words;
}

void printWords( char** str, size_t length)
{
	if (!str)
		return;

	for (size_t i = 0; i < length; i++)
		std::cout << str[i] << std::endl;
}

void free(char** str, size_t length)
{
	if (!str)
		return;
	for (size_t i = 0; i < length; i++)
		delete[] str[i];

	delete[] str;
}

int main()
{
	char str[MAX_SIZE];
	std::cin.getline(str, MAX_SIZE);

	size_t count = 0;
	char** words = tokenize(str, count);
	printWords(words, count);
	free(words, count);


	return 0;
}
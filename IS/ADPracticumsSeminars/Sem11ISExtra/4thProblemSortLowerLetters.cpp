#include<iostream>
constexpr int MAX_SIZE = 100;

bool isLower(char ch)
{
	return ch >= 'a' && ch <= 'z';
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

void concatLetterBack(char* str, int firstInd, char ch, int countTimes)
{
	for (size_t i = 0; i < countTimes; i++)
		str[firstInd + i] = ch;
}

char* sortLower(const char* str)
{
	if (!str)
		return nullptr;

	size_t resSize = countLower(str);

	char* res = new char[resSize + 1];
	unsigned resInd = 0;

	constexpr int alphabet_size = 26;
	constexpr char firstLetter = 'a';

	int letters[26] = { 0 };

	while (*str)
	{
		if (isLower(*str))
			letters[*str - firstLetter]++;

		str++;
	}

	for (size_t i = 0; i < alphabet_size; i++)
	{
		concatLetterBack(res, resInd, firstLetter + i, letters[i]);
		resInd += letters[i];
	}

	res[resSize] = '\0';
	return res;
}
int main()
{
	char str[MAX_SIZE];
	std::cin.getline(str, MAX_SIZE);

	char* sorted = sortLower(str);
	std::cout << sorted;

	delete[] sorted;
	return 0;
}
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

void mySwap(char& a, char& b)
{
	char temp = a;
	a = b;
	b = temp;
}

void sortStr(char* str)
{
	size_t length = myStrLen(str);

	for (size_t i = 0; i < length; i++)
	{
		for (size_t j = i+1; j < length; j++)
		{
			if (str[i] > str[j])
				mySwap(str[i], str[j]);
		}
	}
}
char* sortedLower(const char* str)
{
	if (!str)
		return 0;

	char* sorted = new char[countLower(str) + 1];
	unsigned int sortInd = 0;

	while (*str)
	{
		if(isLower(*str))
		sorted[sortInd++] = *str;

		str++;
	}

	sorted[sortInd] = '\0';

	sortStr(sorted);

	return sorted;
}
int main()
{
	char str[MAX_SIZE];
	std::cin.getline(str, MAX_SIZE);

	char* sortedStr = sortedLower(str);
	std::cout << sortedStr;

	delete[] sortedStr;
}
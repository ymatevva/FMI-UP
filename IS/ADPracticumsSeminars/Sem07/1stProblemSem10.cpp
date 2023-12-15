#include<iostream>
constexpr size_t MAX_SIZE = 100;

void myStrCpy(char* dest, const char* source)
{
	if (!source || !dest)
		return;

	while (*source)
	{
		*dest = *source;
		source++;
		dest++;
	}
	*dest = '\0';
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

bool isPrefix(const char* str, const char* pattern)
{
	if (!str || !pattern)
		return false;

	while (*str && *pattern)
	{
		if (*str != *pattern)
		{
			return false;
		}
		str++;
		pattern++;
	}
	return true;
}

unsigned int countWordOcc(const char* text, const char* what)
{
	if (!text || !what)
		return 0;

	size_t textLenght = myStrLen(text);
	size_t whatLenght = myStrLen(what);
	unsigned int count = 0;

	while (whatLenght <= textLenght)
	{
		if (isPrefix(text, what))
			count++;

		text++;
		textLenght--;
	}
	return count;
}


void findAndReplace(char* str, const char* pattern, const char* replace)
{
	if (!str || !pattern || !replace)
		return;

	size_t replaceLenght = myStrLen(replace);
	size_t patternLenght = myStrLen(pattern);
	size_t strSize = myStrLen(str);

	size_t newSize = strSize + countWordOcc(str, pattern) * (replaceLenght - patternLenght) + 1;

	char* strBegin = str;

	size_t tempInd = 0;
	char* tempResult = new char[newSize];

	while (*strBegin != '\0')
	{
		if (isPrefix(strBegin, pattern))
		{
			myStrCpy(tempResult + tempInd, replace);
			tempInd += replaceLenght;
			strBegin += patternLenght;
		}
		else
		{
			tempResult[tempInd++] = *strBegin;
			strBegin++;
		}
	}

	tempResult[tempInd] = '\0';
	myStrCpy(str, tempResult);

	delete[] tempResult;

}
int main()
{

	char str[MAX_SIZE];
	std::cin.getline(str, MAX_SIZE);

	char where[MAX_SIZE];
	std::cin.getline(where, MAX_SIZE);

	char what[MAX_SIZE];
	std::cin.getline(what, MAX_SIZE);


	findAndReplace(str, where, what);
	std::cout << str;



	return 0;
}
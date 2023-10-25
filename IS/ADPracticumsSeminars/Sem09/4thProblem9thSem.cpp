#include<iostream>
const int MAX_SIZE = 50;

bool isLower(const char ch)
{
	return ch >= 'a' && ch <= 'z';
}


int countLower(const char* str, int hist[])
{
	size_t countLower = 0;

	while (*str != '\0')
	{
		if (isLower(*str))
		{
			countLower++;
			hist[*str - 'a']++;
		}
		str++;
	}
	return countLower;
}

char* sortLower(const char* str)
{
	int hist[26] = {};
	size_t sizeNewStr = countLower(str, hist);

	char* newStr = new char[sizeNewStr + 1];//for '\0'
	size_t strIter = 0;

	for (size_t i = 0; i < 26; i++)
	{
		while (hist[i] > 0)
		{
			newStr[strIter++] = i + 'a';
			hist[i]--;
		}
	}
	newStr[sizeNewStr] = '\0';//we terminate it
	return newStr;
}
int main()
{
	char str[MAX_SIZE];
	std::cin.getline(str, MAX_SIZE);

	char* result = sortLower(str);
	std::cout << result;

	delete[] result;
	return 0;
}
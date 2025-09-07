#include<iostream>
constexpr int MAX_SIZE = 100;

unsigned int countSymbolOcc(const char* str, char ch)
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

unsigned int countSize(const char* str)
{
	if (!str)
		return 0;

	unsigned int count = 0;
	while (*str)
	{
		if (countSymbolOcc(str, *str) == 1)
			count++;

		str++;
	}
	return count;
}


char* removeExtra(const char* str)
{
	if (!str)
		return nullptr;

	size_t newSize = countSize(str);
	char* result = new char[newSize + 1];
	unsigned resInd = 0;

	const char* strBegin = str;
	while (*strBegin)
	{
		if (countSymbolOcc(str, *strBegin) == 1)
			result[resInd++] = *strBegin;

		strBegin++;
	}
	
	result[resInd] = '\0';

	return result;
	delete[] result;
}
int main()
{
	char str[MAX_SIZE];
	std::cin.getline(str, MAX_SIZE);

	char* result = removeExtra(str);
	std::cout << result << std::endl;

	delete[] result;
	return 0;
}
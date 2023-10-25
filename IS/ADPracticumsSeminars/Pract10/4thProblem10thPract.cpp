#include<iostream>
const int MAX_SIZE = 50;
int countSymbol(const char* str, const char symbol)
{
	int count = 0;
	while (*str != '\0')
	{
		if (*str == symbol)
			count++;
		str++;
	}
	return count;
}
int myStrLen(const char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
char* deleteSymbols(char* str, const char symbol)
{
	int countSymbols = countSymbol(str, symbol);

	int originalLength = myStrLen(str);
	int newLength = originalLength + 1 - countSymbols;

	char* temp = new char[newLength];
	size_t iterTemp = 0;

	for ( int strIter = 0; strIter < originalLength ; strIter++)
	{
		if (str[strIter == symbol])
			continue;

		temp[iterTemp++] = str[strIter];
	}

	temp[iterTemp] = '\0';

	return temp;

	delete[] temp;

}
int main()
{
	char str[MAX_SIZE];
	std::cin.getline(str, MAX_SIZE);

	char symbol;
	std::cin >> symbol;

	char* newString = deleteSymbols(str, symbol);

	std::cout << newString;

	return 0;
}
#include<iostream>
const int MAX_SIZE = 1024;

bool isLowerLetter(const char ch)
{
	if (ch >= 'a' && ch <= 'z')
	{
		return true;
	}
	return false;
}

char* getLowerLetters(char* str)
{
	char* lowerLetters = new char[MAX_SIZE];
	int i = 0;
	while (*str != '\0')
	{
		if (isLowerLetter(*str))
		{
			lowerLetters[i] = *str;
			i++;
		}
		str++;
	}

	lowerLetters[i] = '\0';

	if (*lowerLetters == '\0') {
		delete[] lowerLetters;
		return nullptr;
	}
	
	return lowerLetters;
}
int main()
{
	char str[MAX_SIZE] ;
	std::cin.getline(str, MAX_SIZE);

	char* lowerCaseResult = getLowerLetters(str);

	if (lowerCaseResult)
	{
		std::cout << lowerCaseResult << std::endl;
		delete[] lowerCaseResult;
	}
	

	return 0;
}
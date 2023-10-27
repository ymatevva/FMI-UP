#include<iostream>
const int MAX_SIZE = 50;

bool isAlphabeticalSymbol(char ch)
{
	return ch != ' ' && ch != ',' && ch != '!' && ch != '?';
}
int  myStrLen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int countWords(char* str)
{
	bool isAlpha = true;
	int count = 0;

	while (*str != '\0')
	{
		if (!isAlphabeticalSymbol(*str) && isAlpha)
		{
			count++;
			isAlpha = false;
		}
		else if (isAlphabeticalSymbol(*str) && *(str + 1) == '\0')
			count++;
	
		else if (isAlphabeticalSymbol(*str) && !isAlpha)
		isAlpha = true;

		str++;
	}
	return count;
}
int countLastWord(char* str, int& countLetters)
{
	countLetters = 0;
	int lastIndex = myStrLen(str);
	while (isAlphabeticalSymbol(str[lastIndex]))
	{
		lastIndex--;
		countLetters++;
	}

	return countLetters;
}
char* lastWord(char* str)
{	
	int countLetters = 0;
    countLastWord(str,countLetters);

	int lastWordStart = myStrLen(str) - countLetters;

	char* temp = new char[countLetters+1];
	int tempIndex = 0;

	while (str[lastWordStart] != '\0')
	{
		temp[tempIndex++] = str[lastWordStart];
		lastWordStart++;
	}

	temp[tempIndex] = '\0';

	return temp;
	delete[] temp;
}
int main()
{
	char str[MAX_SIZE];
	std::cin.getline(str, MAX_SIZE);

	char* result = lastWord(str);
	std::cout << result;


	delete[]result;
	return 0;
}
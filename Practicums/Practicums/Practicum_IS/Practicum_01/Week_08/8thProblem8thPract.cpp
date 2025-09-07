#include<iostream>
const int MAX_SIZE = 1024;

void myStrCpy(char* dest, const char* source)
{
	while (*source != '\0')
	{
		*dest = *source;
		dest++;
		source++;
	}
	*dest = '\0';
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
bool isLowerLetter(const char ch)
{
	if (ch >= 'a' && ch <= 'z')
	{
		return true;
	}
	return false;
}
void turnIntoDigit(char* str, const char element, int index)
{
	int length = myStrLen(str);
	for (size_t i = index; i < length; i++)
	{
		if (str[i] == element)
		{
			str[i] = '0';
		}
	}
}
void removeRepetition( char* str, char* result)
{
	char* newString = new char[MAX_SIZE];
	int i = 0;
	int j = 0;
	while (str[j] != '\0')
	{
		if (isLowerLetter(str[j]))
		{
			newString[i] = str[j];
			turnIntoDigit(str, str[j], j + 1);
			i++;
		}
		j++;
	}

	newString[i] = '\0';

	if (*newString != '\0')
	{
		myStrCpy(result, newString);
	}
	delete[] newString;
}
int main()
{
	char str[MAX_SIZE];
	std::cin.getline(str, MAX_SIZE);

	char result[MAX_SIZE] = {};

	removeRepetition(str, result);
	std::cout << result;

	return 0;
}
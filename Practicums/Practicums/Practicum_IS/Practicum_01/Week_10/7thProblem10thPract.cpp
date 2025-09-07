#include<iostream>
#include<cstring>

const int MAX_SIZE = 50;

void myStrCpy(char* dest, char* source)
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
int countOccurences(char* str, char symbol)
{
	int count = 0;
	int sizeStr = myStrLen(str);

	for (size_t i = 0; i < sizeStr; i++)
	{
		if (str[i] == symbol)
			count++;
	}
	return count;
}
int countDigits(int number)
{
	int count = 0;
	while (number > 0)
	{
		count++;
		number /= 10;
	}
	return count;
}
void maskThem( char*& str, char ch)
{
	int sizeStr = myStrLen(str);

	for (size_t i = 0; i < sizeStr; i++)
	{
		if (str[i] == ch)
			str[i] = '0';
	}
}
int countDiffSymbols( char*& str)
{
	int count = 0;
	int i = 0;

	char* tempStr = new char[MAX_SIZE];
	myStrCpy(tempStr, str);
	while (tempStr[i] != '\0')
	{
		if ((tempStr[i] != '0'))
		{
			count++;
			count += countDigits(countOccurences(tempStr, tempStr[i]));
			maskThem(tempStr, tempStr[i]);
		}
		i++;
	}
	delete[] tempStr;
	return count;
}
char* compress(char* str)
{
	int newSize = countDiffSymbols(str);

	char* newArr = new char[newSize +1];
	int  newIndex = 0;

	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '0')
		{
			newArr[newIndex++] = str[i];
			int end = countDigits(countOccurences(str, str[i]));
			int copy = countOccurences(str, str[i]);
			for (size_t j = 0; j < end;j ++)
			{
				newArr[newIndex++] = (char)('0' + (copy % 10));
				copy  /= 10;
			}
			maskThem(str, str[i]);
		}
		i++;
	}

	newArr[newIndex] = '\0';


	return newArr;
	
}
int main()
{
	char str[MAX_SIZE];
	std::cin.getline(str, MAX_SIZE);

	char* result = compress(str);
	std::cout << result;

	delete[] result;
	return 0;
}
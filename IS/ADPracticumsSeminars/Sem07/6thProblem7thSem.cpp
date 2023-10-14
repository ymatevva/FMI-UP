#include<iostream>
#include<cstring>

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
void myStrCat(char* dest, const char* source)
{
	size_t destLenght = myStrLen(dest);
	dest += destLenght;
	myStrCpy(source, dest);
}
void myStrCpy( const char* source, char* dest)
{
	if (source == 0 || dest == 0)
	{
		return;
	}
	while (*source != '\0')
	{
		*dest = *source;
		source++;
		dest++;
	}
	*dest = '\0';
}

// find a word and replace with another
const int MAX_SIZE = 1000;


bool isPrefix(const char* str, const char* pattern)
{
	while (*str != '\0' && *pattern != '\0')
	{
		if (*str != *pattern)
		{
			return false;
		}
		str++;
		pattern++;
	}
	if (*pattern == '\0')
	{
		return true;
	}
}

void findAndReplace(char* str, const char* pattern,  char* replace)
{
	size_t replaceLenght = myStrLen(replace);
	size_t patternLenght = myStrLen(pattern);

	char* strBegin = str;

	char tempResult[MAX_SIZE];
	size_t tempIndex = 0;

	while (*str != '\0')
	{

		if (isPrefix(str,pattern))
		{
			tempResult[tempIndex] = '\0';
			myStrCat(tempResult, replace);
			tempIndex += replaceLenght;
			str += patternLenght;
		}
		else
		{
			tempResult[tempIndex++] = *str;
			str++;
		}
	}
	tempResult[tempIndex] = '\0';
	myStrCpy(strBegin, tempResult);
}
int main()
{

	char str[1024] = "Hello my friend. Are you my friend?";
	char pattern[] = "friend";
	char replace[] = "enemy";

	findAndReplace(str, pattern, replace);

	std :: cout << str;





	return 0;
}
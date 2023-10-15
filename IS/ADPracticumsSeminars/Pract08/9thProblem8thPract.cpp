#include<iostream>
const int MAX_SIZE = 1024;

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
int myStrNCmp(const char* str, const char* pattern, int index)
{
	while (*pattern != '\0')
	{
		if (str[index] != *pattern)
		{
			return -1;
			break;
		}
		index++;
		pattern++;
	}
	return 0;
}
int firstOccurence(const char* text, const char* word)
{
	int position = 0;
	int length = myStrLen(text);
	for (size_t i = 0; i < length; i++)
	{
		if (myStrNCmp(text,word,i) == 0)
		{
			position = i;
			break;
		}
	}
	return position;
}


int main()
{
	char text[MAX_SIZE];
	std::cin.getline(text, MAX_SIZE);

	char word[MAX_SIZE];
	std::cin.getline(word, MAX_SIZE);

	std::cout << firstOccurence(text, word) << std::endl;

	return 0;
}
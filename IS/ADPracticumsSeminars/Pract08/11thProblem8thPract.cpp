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
	int i = index;
	int j = 0;
	while (pattern[j] != '\0')
	{
		if (str[i] != pattern[j])
		{
			return 1;
		}
		i++;
		j++;
	}
	return 0;
}
bool isLower(const char ch)
{
	return (ch >= 'a' && ch <= 'z');
}
bool isAlphabetical(const char ch)
{
	return(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z');
}
void toLower(char* str)
{
	while (*str != '\0')
	{
		if (!isLower(*str) && isAlphabetical(*str))
		{
			*str = *str - 'A' + 'a';
		}
		str++;
	}
}
void putStars(char* str1, int index, int length)
{
	for (size_t i = index; i < length+index; i++)//up to length+index because if is only length they can be 6 and 6 and nothing will change
	{
		str1[i] = '*';
	}
}
void change( char* str1,  char* str2)
{
	toLower(str1);
	int lengthStr2 = myStrLen(str2);
	int i = 0;
	
	while (str1[i] != '\0')
	{
		if (myStrNCmp(str1, str2, i) == 0)
		{
			putStars(str1, i, lengthStr2);
		}
		i++;
	}
}
int main()
{
	char str1[MAX_SIZE];
	std::cin.getline(str1, MAX_SIZE);

	char str2[MAX_SIZE];
	std::cin.getline(str2, MAX_SIZE);

	change(str1, str2);
	std::cout << str1 << std::endl;



	return 0;
}
#include<iostream>
//functions for strings

// function for finding the length of a char array
size_t myStrlen(const char* str)
{
	if (str == nullptr)
	{
		return 0;
	}

	size_t count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

// function for comparing two char arrays

int myStrCmp(const  char* str1, const char* str2)
{
	if (str1 == nullptr || str2 == nullptr)
	{
		return 0;
	}
	while (*str1 != '\0' && *str2 != '\0')
	{
		if (*str1 < *str2)
		{
			return -1;
		}
		if(*str1 > *str2)
		{
			return 1;
		}
		str1++;
		str2++;
	}
	if (*str1 == '\0' && *str2 == '\0')
	{
		return 0;
	}

	return *str1 == '\0' ? -1 : 1;
}

//function for copying text from one place to another
void myStrCpy(const char* source, char* dest)
{
	if (source == nullptr || dest == nullptr)
	{
		return ;
	}
	while (*source != '\0')
	{
		*dest = *source;
		dest++;
		source++;
	}
	*dest = '\0';
}

//concatenation //we assume that dest is big enough
void myStrCat(char* dest, const char* source)
{
	size_t destLen = myStrlen(dest);
	dest += destLen;
	myStrCpy(source, dest);
}


int main()
{

	char str1[20] = "ABC";
	char str2[40] = "XY";
	myStrCat(str2, str1);
	std::cout << str2;
















	return 0;
}
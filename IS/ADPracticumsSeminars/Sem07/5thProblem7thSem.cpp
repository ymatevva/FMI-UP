#include<iostream>
// the whole problem is about finding if a word is in another one
//checking if the pattern is prefix of the first one
bool isPrefix(const char* str, const char* pattern)
{
	while (*str != '\0' && *pattern != '\0')
	{
		if (*str != *pattern)
		{
			return false;
		}
		pattern++;
		str++;
	}
	if (*pattern == '\0')
	{
		return true;
	}
}
bool searchInText(const char* str, const char* pattern)
{
	size_t strLenght = strlen(str);
	size_t patternLenght = strlen(pattern);
	while (patternLenght <= strLenght)
	{
		if (isPrefix(str, pattern))
			return true;

				str++;
				strLenght--;
	}
	return false;

}
int main()
{
	char str[] = "hello guys!";
	char pattern[] = "guys";//we should find where this word is

	std::cout << searchInText(str, pattern);
	


	return 0;
}
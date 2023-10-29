#include<iostream>
const int MAX_SIZE = 50;

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
bool isPalidnrome(char* str, int length)
{
	
	if (length == 0 || length == 1)
		return true;

	if (str[0] == str[length - 1])
	{
		return isPalidnrome(str + 1, length - 2);
	}
	else
		return false;
}
int main()
{
	char str[MAX_SIZE];
	std::cin.getline(str, MAX_SIZE);

	int length = myStrLen(str);

	std::cout << std::boolalpha << isPalidnrome(str,length);

	return 0;
}
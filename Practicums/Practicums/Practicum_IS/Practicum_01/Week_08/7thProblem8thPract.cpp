#include<iostream>
const int MAX_SIZE = 1024;

int myStrCmp(const char* str1, const char* str2)
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
		else if (*str1 > *str2)
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
	else
		return *str1 == '\0'? '-1' : '1';
}

int main()
{
	char str1[MAX_SIZE];
	std::cin.getline(str1, MAX_SIZE);

	char str2[MAX_SIZE];
	std::cin.getline(str2, MAX_SIZE);


	if (myStrCmp(str1,str2) < 0)
	{
		std::cout << "The first is smaller" << std::endl;
	}
	else if (myStrCmp(str1, str2) > 0)
	{
		std::cout << "The second is smaller" << std::endl;
	}
	else if(myStrCmp(str1,str2) == 0)
	{
		std::cout << "They are equal" << std::endl;
	}







	return 0;
}
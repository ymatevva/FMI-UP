#include<iostream>
const int MAX_SIZE = 1024;

char* longestPrefix(const char* str1, const char* str2, const char* str3)
{
	char* longestPref = new char[MAX_SIZE];
	int i = 0;
	while (*str1 != '\0' && *str2 != '\0' && *str3 != '\0')
	{
		if (*str1 == *str2 && *str2 == *str3)
		{
			longestPref[i] = *str1;
		}
		else
		{
			break;
		}
		i++;
		str1++;
		str2++;
		str3++;
	}
	longestPref[i] = '\0';

	if (*longestPref == '\0')
	{
		delete[] longestPref; 
		return nullptr;
	}

	return longestPref;
}
int main()
{
	char str1[MAX_SIZE];
	std::cin.getline(str1, MAX_SIZE);

	char str2[MAX_SIZE];
	std::cin.getline(str2, MAX_SIZE);

	char str3[MAX_SIZE];
	std::cin.getline(str3, MAX_SIZE);


	char* result = longestPrefix(str1, str2, str3);
	if (result)
	{
		std::cout << result << std::endl;
		delete[] result;
	}
	

	return 0;
}
#include<iostream>
const int MAX_SIZE = 50;

int wordsCount(const char* str)
{
	if (str == nullptr)
	{
		return 0;
	}

	int count = 0;
	
	bool prevChar = true;
	while (*str != '\0')
	{
		
		if (*str == ' ')
		{
			if (prevChar)
			{
				count++;
			}
		   prevChar = false;
		}

		else if( *str != ' ' && * (str + 1) == '\0')
		{
			count++;
		}
		else if (*str != ' ')
		{
			prevChar = true;
		}
		
		str++;
	}
	return count;
}
int main()
{
	char str[MAX_SIZE];
	std::cin.getline(str, MAX_SIZE);

	std::cout << wordsCount(str) << std::endl;


	return 0;
}
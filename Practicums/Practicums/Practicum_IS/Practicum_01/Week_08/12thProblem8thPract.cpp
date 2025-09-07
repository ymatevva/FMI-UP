#include<iostream>
const int MAX_SIZE = 50;

bool space(const char ch)
{
	if (ch != ' ')
	{
		return true;
	}
	return false;
}
int words(const char* str)
{
	bool prevLetter = true;
	int i = 0;
	int count = 0;

	while (str[i] != '\0')
	{
		if (!space(str[i]))
		{
			prevLetter = true;
		}
		else if (space(str[i]) && prevLetter || !space(str[i]) && str[i + 1] == '\0')
		{
			count++;
		}
		if (space(str[i]))
		{
			prevLetter = false;
		}
		i++;
	}
	return count;
}
int main()
{
	char str[MAX_SIZE];
	std::cin.getline(str, MAX_SIZE);


	std::cout << words(str) << std::endl;


	return 0;
}
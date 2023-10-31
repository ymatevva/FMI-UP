#include<iostream>
const int MAX_SIZE = 50;

bool isCapital(char ch)
{
	return ch >= 'A' && ch <= 'Z';
}

bool isLower(char ch)
{
	return ch >= 'a' && ch <= 'z';
}

void getLowerCapCount(char* str, int& lowerCount, int& capCount)
{
	if (*str == '\0')
	{
		lowerCount = capCount = 0;
		return;
	}

	getLowerCapCount(str + 1, lowerCount, capCount);

	if (isCapital(str[0]))
		capCount++;
	else if (isLower(str[0]))
	lowerCount++;

}
int main()
{
	int lower, capitals;

	char str[MAX_SIZE];
	std::cin.getline(str, MAX_SIZE);

	getLowerCapCount(str, lower, capitals);

	std::cout << lower << " " << capitals;



	return 0;
}
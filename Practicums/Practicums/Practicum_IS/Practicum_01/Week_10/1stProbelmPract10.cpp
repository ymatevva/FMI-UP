#include<iostream>
const int MAX_SIZE = 50;

char myStrLen(const char* text)
{
	int count = 0;
	while (*text != '\0')
	{
		count++;
		text++;
	}
	return count;
}
char* replace(const char* text, const char ch, int i)
{
	int resultIter = 0;
	int length = myStrLen(text);

	char* result = new char[length + 1];

	for (int textIter = 0; textIter < length; textIter++)
	{
		if (textIter == i)
			result[resultIter++] = ch;

		result[resultIter++] = text[textIter];
	}

	result[resultIter] = '\0';


	return result;
		delete[] result;

}
int main()
{
	char text[MAX_SIZE];
	std::cin.getline(text, MAX_SIZE);

	char symbol;
	std::cin >> symbol;

	int i;
	std::cin >> i;

	char* result = replace(text, symbol, i);
	std::cout << result;

	return 0;
}
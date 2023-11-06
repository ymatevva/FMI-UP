#include<iostream>
const int MAX_SIZE = 50;


int myStrLen(char str[])
{
	int count = 0;
	int i = 0;
	while (str[i] != '\0')
	{
		count++;
		str++;
	}
	return count;
}
void replaceSymbol(char array[], char ch, int& count)
{
	int lenght = myStrLen(array);

	for (int i = 0; i < lenght; i++)
	{
		if (array[i] == ch)
		{
			count++;
			array[i] = '*';
		}
	}
}

int main()
{

	char array[MAX_SIZE];
	std::cin.getline(array, MAX_SIZE);

	char ch;
	std::cin >> ch;

	int count = 0;

	replaceSymbol(array,ch, count);

	int size = myStrLen(array);

	std::cout << count << std::endl;

	for (int i = 0; i < size; i++)
	{
		std::cout << array[i] << " ";
	}
	return 0;
}

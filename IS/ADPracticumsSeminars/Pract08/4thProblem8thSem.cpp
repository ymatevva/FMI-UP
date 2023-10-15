#include<iostream>
const int MAX_SIZE = 50;
int symbolOccurence(const char* str, const char symbol)
{
	int i = 0;
	int count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == symbol)
		{
			count++;
		}
		i++;
	}
	return count;
}
int main()
{
	char str[MAX_SIZE];
	std::cin.getline(str, MAX_SIZE);

	char symbol;
	std::cin >> symbol;

	std::cout << symbolOccurence(str, symbol) << std::endl;




	return 0;
}
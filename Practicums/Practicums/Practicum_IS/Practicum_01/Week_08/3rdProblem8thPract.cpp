#include<iostream>
#include<cstring>
const int MAX_SIZE = 1024;


char* replace(char* str, const char x, const char a, const  char b)
{
	char* result = new char[MAX_SIZE];
	int i = 0; 
	int xCount = 0;
	while (str[i] != '\0')
	{
		if (str[i] == x)
		{ 
			xCount++;
			if (xCount % 2 != 0)
			{
				str[i] = a;
			}
			else
				str[i]=b;
		}
		
		result[i] = str[i];
		i++;
	}

	result[i] = '\0';

	if (*result == '\0')
	{
		delete[] result;
		return nullptr;
	}
	
	return result;
}
int main()
{
	char str[MAX_SIZE];
	std::cin.getline(str, MAX_SIZE);

	char x, a, b;
	std::cin >> x >> a >> b;

	char* totalStr = replace(str, x, a, b);

	if (totalStr)
	{
		std::cout << totalStr << std::endl;
		delete[] totalStr;
	}
	

	return 0;
}
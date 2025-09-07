#include<iostream>
//two ways
const int  MAX_SIZE = 200;

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
void fromBegToEnd(char* str,int beg,int end)
{
	int length = myStrLen(str);
	if (end > length )
	{
		end = length;

		for (size_t i = beg; i <= end; i++)
		{
			std::cout << str[i];
		}

	}
	if (beg > length)
	{
		std::cout << "";
	}
	else 
	{
		for (size_t i = beg; i <= end; i++)
		{
			std::cout << str[i];
		}
	}
	
}
char* fromBeginToEnd(char* str, int begin, int end)
{   
	int length = myStrLen(str);
	char* result = new char[MAX_SIZE];
	int i = 0;
	if (end > length)
	{
		end = length;
	}
	while (begin < end && str[begin] != '\0' )
	{
		result[i] = str[begin];
		i++;
		begin++;
	}
	
	result[i] = '\0';

	
	if (*result == '\0') {
		delete[] result;
		return nullptr;
	}
	return result;
}
int main()
{
	char str[MAX_SIZE];
	std::cin.getline(str, MAX_SIZE);


	int begin, end;
	std::cin >> begin >> end;

   // fromBegToEnd(str,begin,end);
	
	char* finalStr = fromBeginToEnd(str, begin, end);
	std::cout << finalStr;

	delete[] finalStr;

	return 0;
}
#include<iostream>
const int MAX_SIZE = 60;

bool isInIt(const char* str,const char symbol)
{
	while (*str != '\0')
	{
		if (*str == symbol)
		{
			return true;
			break;
		}
		str++;
	}
	return false;
}

void countNotInBoth(const char* str1, const char* str2, int& count)
{
	while (*str1 != '\0')
	{
		if (!isInIt(str2, *str1))
			count++;
		str1++;
	}
	while (*str2 != '\0')
	{
		if (!isInIt(str1, *str2))
			count++;
		str2++;
	}
}
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
char* intersection(const char* str1, const char* str2)
{
	int count = 0;
    countNotInBoth(str1, str2,count);
	char* newArr = new char[count+1];

	size_t size1 = myStrLen(str1);
	size_t size2 = myStrLen(str2);

    size_t newIndex = 0;
	for (int str1Index= 0; str1Index < size1; str1Index++)
	{
		if (!isInIt(str2,str1[str1Index]))
			newArr[newIndex++] = str1[str1Index];
	}
	for (int str2Index = 0; str2Index < size2; str2Index++)
	{
		if (!isInIt(str1, str2[str2Index]))
			newArr[newIndex++] = str2[str2Index];
	}

	newArr[newIndex] = '\0';

	return newArr;
	delete[] newArr;
}
int main()
{
	char str1[MAX_SIZE];
	std::cin.getline(str1, MAX_SIZE);

	char str2[MAX_SIZE];
	std::cin.getline(str2, MAX_SIZE);

	char* result = intersection(str1, str2);

	std::cout << result;

	return 0;
}

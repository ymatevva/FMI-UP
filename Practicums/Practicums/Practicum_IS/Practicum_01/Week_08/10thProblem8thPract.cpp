#include<iostream>
const int MAX_SIZE = 1024;

bool myStrNCmp(const char* str, const char* pattern, int index)
{
	int i = index;
	while (*pattern != '\0')
	{
		if (str[i] != *pattern)
		{
			return false;
		}
		i++;
		pattern++;
	}
	return true;
}
 int times(const char* str1, const char* str2)
 {
	 int i = 0;
	 int count = 0;
	 while (str1[i] != '\0')
	 {

		 if (myStrNCmp(str1,str2,i))
		 {
			 count++;
		 }
		 i++;
	 }
	 return count;
 }
int main()
{
	char str1[MAX_SIZE];
	std::cin.getline(str1, MAX_SIZE);

	char str2[MAX_SIZE];
	std::cin.getline(str2, MAX_SIZE);

	std::cout << times(str1, str2) << std::endl;



	return 0;
}
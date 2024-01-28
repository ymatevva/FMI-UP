#include<iostream>
#include<cassert>
unsigned int countSize(unsigned int n)
{
	unsigned int count = 1;
	while (n > 26)
	{
		n /= 26;
		count++;
	}
	return count;
}

char convertToHar(unsigned int n)
{
	return n +'A';
}
char* convertToColumnTitle(unsigned int n)
{
	size_t newSize = countSize(n);
	char* title = new char[newSize + 1];
	unsigned int index = newSize-1;
	title[newSize] = '\0';
	while (n != 0)
	{
		title[index--] = convertToHar(--n % 26) ;
		n /= 26;
	}
	return title;
}
int main()
{
	unsigned int n;
	std::cin >> n;
	assert(n >= 1 && n <= INT_MAX);
	char* res = convertToColumnTitle(n);
	std::cout << res;

	delete[] res;
	return 0;
}
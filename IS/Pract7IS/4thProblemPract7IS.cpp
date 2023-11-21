#include<iostream>
constexpr int MAX_SIZE = 1024;

unsigned int countDigits(unsigned int n)
{
	unsigned int count = 0;
	while (n != 0)
	{
		count++;
		n /= 10;
	}
	return count;
}
char* returnPointer(int n)
{
	char temp[MAX_SIZE];
	int size = countDigits(n);

	for (int i = size; i >= 0; i--)
	{
		temp[i] = n % 10;
		n /= 10;
	}

	temp[size + 1] = '\0';
	return temp;
}

int main()
{
	int n;
	std::cin >> n;

	char* ptr = returnPointer(n);


	return 0;
}
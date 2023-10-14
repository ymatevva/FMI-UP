#include<iostream>
//from int to string

char digitToChar(int digit)
{
	if (digit >= 0 && digit <= 9)
	{
		return digit + '0';
	}
	return '\0';
}

unsigned int countDigits(unsigned int n)
{
	if (n == 0)
		return 1;
	unsigned int count = 0;

	while (n > 0)
	{
		count++;
		n /= 10;
	}
	return count;
}
void convertCharToString(unsigned int n, char* str)
{
	unsigned int length = countDigits(n);

	for (int i = length - 1; i >= 0 ; i--)
	{
		str[i] = digitToChar(n % 10);
		n /= 10;
	}
	str[length] = '\0';// we terminate manually the string

}
int main()
{
	char str[20];
	unsigned int number = 1234;
	convertCharToString(number, str);
	std::cout << str ;
	return 0;
}
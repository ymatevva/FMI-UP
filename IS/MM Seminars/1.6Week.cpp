#include<iostream>

int abs(int number)
{
	if (number < 0)
	{
		return number * -1;
	}
	else
		return number;
}

int pow(int n, int k)
{
	int product = 1;
	for (size_t i = 1; i <= k; i++)
	{
		product = product * n;
	}
	return product;
}

bool isAlpha(char ch)
{
	if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
	{
		return true;
	}
	else
		return false;
}
bool isDigit(char ch)
{
	if (ch >= '0' && ch <= '9')
	{
		return true;
	}
	else
		return false;
}
int main()
{
	int n;
	std::cin >> n;
 
	int k;
	std::cin >> k;


	char c;
	std::cin >> c;



	return 0;
}
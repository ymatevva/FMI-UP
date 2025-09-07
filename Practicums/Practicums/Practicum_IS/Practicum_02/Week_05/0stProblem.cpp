#include<iostream>

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	temp = b;
}

bool isEven(int num)
{
	return num % 2 == 0 ? true : false;
}

int pow(int base, int exponent)
{
	int result = 1;
	for (int i = 1; i <= exponent; i++)
	{
		result = result * base;
	}
	return result;
}

int min(int a, int b)
{
	return  a < b ? a : b;	
}

int max(int a, int b)
{
	return a > b ? a : b;
}

int minOfThree(int a, int b, int c)
{
	return (a < b && a < c) ? a : ((b < a&& b < c) ? b : c);
}

int maxOfThre(int a, int b, int c)
{
	return (a > b && a > c) ? a : ((b > a && b > c) ? b : c);
}

bool isAlpha(char ch)
{
	return ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z';
}

bool isDigit(char ch)
{
	return ch >= '0' && ch <= '9';
}

void printMatrix(int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i == j)
				std::cout << i << " ";
			else if (i < j)
				std::cout << j - i << " ";
			else if (i > j)
				std::cout << j * i << " ";
		}
		std::cout << std::endl;
	}
}

int countOccurences(int number, int digit)
{
	int count = 0;
	while (number != 0)
	{
		if (number % 10 == digit)
			count++;
		
		number /= 10;
	}
	return count;
}

bool areAscending(int a, int b, int c, int d, int e)
{
	return a < b && b < c && d < e;
}

int powerOfTwo(int num)
{
	return num * num;
}

int maxOfThree(int a, int b, int c)
{
	return  max(max(a, b), c);
}

void deposit(int& bankAccount)
{
	int money;
	std::cin >> money;
	bankAccount += money;
}

void withdraw(int& bankAccount)
{
	int withdrawMoney;
	std::cin >> withdrawMoney;
	bankAccount -= withdrawMoney;
}

void checkBalance(int& bankAccount)
{
  std:: cout << bankAccount;
}

int main()
{
	int bankAccount = 0;

	deposit(bankAccount);
	std::cout << bankAccount;

	withdraw(bankAccount);
	std::cout << bankAccount;

	checkBalance(bankAccount);
	std::cout << bankAccount;

	return 0;
}
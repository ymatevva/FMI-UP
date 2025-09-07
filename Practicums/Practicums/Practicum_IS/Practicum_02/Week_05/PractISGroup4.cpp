#include<iostream>

int fibb(int n)
{
	int first = 0;
	int second = 1;
	int currElement = 0;
	for (int i = 2; i <= n ; i++)
	{
		currElement = first + second;
		first = second;
		second = currElement;
	}
	return currElement;
}

bool canFormTriangle(int a, int b, int c)
{
	return a + b > c && b + c > a && a + c > b;
}

int perimeter(int a, int b, int c)
{
	return a + b + c;
}

int areaTriangle(int a, int b, int c)
{
	int p = perimeter(a, b, c);
	return sqrt(p * (p - a) * (p - b) * (p - c));
}

int factoriel(int n)
{
	int res = 1;
	int end = n;
	for (int i = 1; i <= end; i++)
	{
		res *= n;
		n -= 1;
	}
	return res;
}

void perfectNum(int n)
{
	for (int i = 1; i < n; i++)
	{
		for (int j = 1; j < n; j++)
		{
			if (n % i == 0 && n % j == 0 && n == i + j)
				std::cout << i << " + " << j << " = " << n << std::endl;
		}
	}
}

int reverse(int num)
{
	int sum = 0;
	while (num != 0)
	{
		sum = sum * 10 + num % 10;
		num /= 10;
	}
	return sum;
}

bool pal(int num)
{
	return reverse(num) == num;
}

bool isSumOfTheNext(int number)
{
	while (number > 99)
	{
		if (!(number % 10 + (number / 10) % 10 == (number / 100) % 10))
			return false;
		number /= 10;
	}
	return true;
}
int main()
{
	int n;
	std::cin >> n;
	std::cout << std::boolalpha << isSumOfTheNext(n);

	return 0;
}
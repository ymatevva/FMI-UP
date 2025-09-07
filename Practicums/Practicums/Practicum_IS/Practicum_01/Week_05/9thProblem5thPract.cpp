#include<iostream>

int countDigits(int number)
{
	int count = 0;
	while (number != 0)
	{
		count++;
		number /= 10;
	}
	return count;
}

int reverse(int num)
{
	int sum = 0;
	while (num > 0)
	{
		sum = sum * 10 + num % 10;
		num /= 10;
	}
	return sum;
}
void change(int& a, int& b, int& k)
{
	int count = 0;
	int newB = 0;
	int revA = reverse(a);
	while (count != k)
	{
		newB = newB * 10 + a % 10;
		a /= 10;
		count++;
	}

	newB = reverse(newB);
	int revB = reverse(b);
	while (revB != 0)
	{
		newB = newB * 10 + revB % 10;
		revB /= 10;
	}

	b = newB;
	
}
int main()
{
	int a ,b, k;
	std::cin >> a >> b >> k;

	change(a, b, k);
	std::cout << a << " " << b;

	return 0;
}
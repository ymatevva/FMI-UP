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
void divideNumTwoParts(int n)
{
	int numDigitsFirst = 0;
	int numDigitsSecond = 0;

	int firstPart = 0;
    int secondPart = 0;

	if (countDigits(n) % 2 == 0)
	{
		 numDigitsFirst = countDigits(n) / 2 + 1;
		 numDigitsSecond = countDigits(n) / 2;
	}
	else
	{
		 numDigitsFirst = countDigits(n) / 2 + 1;
		 numDigitsSecond = countDigits(n) / 2;
	}
	//
	int k = 0;
	while (k < numDigitsSecond)
	{
		secondPart = secondPart * 10 + n % 10;
		n /= 10;
		k++;
	}

	k = 0;
	while (k < numDigitsFirst)
	{
		firstPart = firstPart * 10 + n % 10;
		n /= 10;
		k++;
	}
	std::cout << reverse(firstPart) << " " << reverse(secondPart) << std::endl;
}
int main()
{
	int n;
	std::cin >> n;

	divideNumTwoParts(n);





	return 0;
}
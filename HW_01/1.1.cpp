#include<iostream>

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

bool isTheSame(unsigned int a, unsigned int b)
{
	while (b != 0 && a != 0)
	{
		unsigned int lastDigitA = a % 10;
		unsigned int lastDigitB = b % 10;

		if (lastDigitA != lastDigitB)
			return false;

		a /= 10;
		b /= 10;
	}
	return true;
}

unsigned int reverse(unsigned int n)
{
	unsigned int rev = 0;

	while (n != 0)
	{
		(rev *= 10) += n % 10;
		 n /= 10;
	}

	return rev;
}

unsigned int formNumWithoutOneDigit(unsigned int n, unsigned int posK)
{

	unsigned int length = countDigits(n);
	unsigned int copyN = reverse(n);


	unsigned int numWithoutDigit = 0;

	for (int i = length ; i >= 1; i--)
	{
		if (i == posK )
		{
			copyN /= 10;
			continue;
		}


		(numWithoutDigit *= 10) += copyN % 10;
		copyN /= 10;
	}

	return numWithoutDigit;
}
bool canFormSecondNum(unsigned a, unsigned b)
{
	if (countDigits(a) == 2 && a % 10 == 0 && b == 0)
	{
		return true;
	}

	unsigned int variations = countDigits(a);

	if (countDigits(a) != countDigits(b) + 1)
		return false;

	for (size_t count = 1; count <= variations; count++)
	{
		unsigned int numToTry = formNumWithoutOneDigit(a, count);

		if (isTheSame(numToTry, b))
			return true;
	}

	return false;
}
int main()
{
	unsigned int a, b;
	std::cin >> a >> b;

	bool result = canFormSecondNum(a, b);

	std::cout << ((result == 1) ? "Yes" : "No") << std::endl;

	return 0;
}
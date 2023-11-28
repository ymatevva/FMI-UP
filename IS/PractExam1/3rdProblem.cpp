#include<iostream>

unsigned int reverse(unsigned int n)
{
	unsigned int res = 0;
	while (n != 0)
	{
		(res *= 10) += n % 10;
		n /= 10;
	}
	return res;
}

unsigned int transformDigit(unsigned int n)
{
	unsigned int revN = reverse(n);
	unsigned int res = 0;

	while (revN != 0)
	{
		unsigned int lastDigit = revN % 10;

		if (lastDigit % 2 != 0)
			(res *= 10) += lastDigit;

		revN /= 10;
	}

	res *= 2;

	return res;
}
int main()
{
	unsigned int n;
	std::cin >> n;

	std::cout << transformDigit(n);

	return 0;
}
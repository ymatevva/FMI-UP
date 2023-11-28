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

unsigned int removeDigitOnPosK(unsigned int n, unsigned int K)
{
	unsigned int digits = countDigits(n);
	unsigned int res = 0;
	unsigned int revN = reverse(n);

	for (size_t i = 1; i <= digits; i++)
	{
		if (i == K)
		{
			revN /= 10;
			continue;
		}

		(res *= 10) += revN % 10;
		revN /= 10;
	}
	return res;
}
int main()
{
	unsigned int n;
	std::cin >> n;

	unsigned int K;
	std::cin >> K;

	std::cout << removeDigitOnPosK(n, K);


	return 0;
}
#include<iostream>

unsigned int rev(unsigned int n)
{
	unsigned int res = 0;
	while (n != 0)
	{
		(res *= 10) += n % 10;
		n /= 10;
	}
	return res;
}
bool isDigitSumOfPrevTwo(unsigned int n)
{
	n = rev(n);
	while (n > 99)
	{
		unsigned int curr = n % 10;
		unsigned int prevFirst = (n / 10) % 10;
		unsigned int prevSecond = (n / 100) % 10;

		if (curr != prevFirst + prevSecond)
			return false;
		n /= 10;
	}

	return true;
}
int main()
{
	unsigned int n;
	std::cin >> n;

	std::cout << std::boolalpha << isDigitSumOfPrevTwo(n);


	return 0;
}
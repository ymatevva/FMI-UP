#include<iostream>


int countDigits(int number)
{
	int count = 0;
	while (number > 0)
	{
		count++;
		number /= 10;
	}
	return count;
}
int kDigit(int n, int k)
{
	int count = 0;
	int kDigit = 0;
	k = countDigits(n) - k;
	while (n != 0)
	{
		if (count == k)
		{
			kDigit = n % 10;
		}
		count++;
		n /= 10;
	}
	return kDigit;
}
int main()
{
	

	int n, k;
	std::cin >> n >> k;

	std::cout << kDigit(n, k);



	return 0;
}
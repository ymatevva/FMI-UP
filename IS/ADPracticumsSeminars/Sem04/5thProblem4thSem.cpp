#include<iostream>

int digits(int number)
{
	int count = 0;
	while (number > 0)
	{
		count++;
		number /= 10;
	}
	return count;
}
int main()
{
	int n, k;
	std::cin >> n >> k;

	bool isSuf = true;
	while (digits(k) > 0)
	{
		int lastDigitN = n % 10;
		int lastDigitK = k % 10;

		if (lastDigitK!=lastDigitN)
		{
			isSuf = false;
			break;
		}
		n /= 10;
		k /= 10;
	}

	
	std::cout << std::boolalpha << isSuf << std::endl;
	










	return 0;
}
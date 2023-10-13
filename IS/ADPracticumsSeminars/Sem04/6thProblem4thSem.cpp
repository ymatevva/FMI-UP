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
int reverse(int number)
{
	int result = 0;
	while (number > 0)
	{
		result = result * 10 + number % 10;
		number /= 10;
	}
	return result;
}

int main()
{


	int n, k;
	std::cin >> n >> k;

	int reversed = reverse(n);
	int reversedK = reverse(k);
	bool isPref = true;

	while (digits(reversedK) > 0)
	{
		int lastDigitN = reversed % 10;
		int lastDigitK = reversedK % 10;

		if (lastDigitK != lastDigitN)
		{
			isPref = false;
			break;
		}

		reversed /= 10;
		reversedK /= 10;
	}


	std::cout << std::boolalpha << isPref << std::endl;














	return 0;
}
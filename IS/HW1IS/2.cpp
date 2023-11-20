#include<iostream>


int occurences(int num, int digit)
{
	int count = 0;

	while (num != 0)
	{
		int lastDigit = num % 10;

		if (lastDigit == digit)
			count++;

		num /= 10;
	}

	return count;
}

bool containsTheSameDigitsSameTimes(int num1, int num2)
{
	int copyNum2 = num2;

	while (copyNum2 != 0)
	{
		int lastDigitNum2 = copyNum2 % 10;

		if (occurences(num1, lastDigitNum2) != occurences(num2,lastDigitNum2))
			return false;

		copyNum2 /= 10;
	}

	return true;
}

void printCombinations(unsigned int num)
{
	for (int formedNum = 1000; formedNum <= 9999; formedNum++)
	{
		if (containsTheSameDigitsSameTimes(num, formedNum))
			std::cout << formedNum << std::endl;	
	}
}
int main()
{
	unsigned int n;//with four digits
	std::cin >> n;

	if (n < 1000 || n > 9999)
	{
		std::cout << "Invalid input! Try again: ";
		std::cin >> n;
	}
	printCombinations(n);

	return 0;
}
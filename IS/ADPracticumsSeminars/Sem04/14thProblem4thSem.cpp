#include<iostream>

int countDigitsOccurences(int number,int digit)
{
	int count = 0;
	while (number > 0)
	{
		if (number%10 == digit )
		{
			count++;
		}
		number /= 10;
	}
	return count;
}

int concatanate(int newNum, int digit, int times)
{
	int count = 0;
	while (count < times)
	{
		newNum = newNum * 10 + digit;
		count++;
	}
	return newNum;
}

int sorted(int number)
{
	int result = 0;
	for (size_t i = 1; i <= 9; i++)
	{
		int currentDigitOccurences = countDigitsOccurences(number, i);
		result = concatanate(result, i, currentDigitOccurences);
	}
	return result;
}
int main()
{
	int n;
	std::cin >> n;

	std::cout << sorted(n) << std::endl;

















	return 0;
}
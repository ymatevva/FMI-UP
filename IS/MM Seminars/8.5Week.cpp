#include<iostream>

bool areDigitsDifferent(int number)
{
	int temp = number;
	
	while (temp > 0)
	{
		int currDigit = temp % 10;
		int remainingDigits = temp / 10;

		int compareDigits = remainingDigits;
		while (compareDigits > 0)
		{
			if (currDigit == compareDigits % 10)
			{
				return false;
			}
			compareDigits /= 10;
		}
		temp /= 10;
	}
	return true;
}
int main()
{
	int A, B;
	std::cin >> A >> B;

	int count = 0;
	for (size_t i = A; i <= B ; i++)
	{
		if (areDigitsDifferent(i))
		{
			count++;
		}
	}

	std::cout << count << std::endl;


	return 0;
}
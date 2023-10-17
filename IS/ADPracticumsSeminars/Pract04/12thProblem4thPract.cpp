#include<iostream>

int countDigitOcc(int number,int digit)
{
	int count = 0;
	while (number != 0)
	{
		if (number % 10 == digit)
		{
			count++;
		}
		number /= 10;
	}
	return count;
}

int concatanate(int result, int digit, int times)
{
	int i = 1;
	while (i <= times)
	{
		result = result * 10 + digit;
		i++;
	}
	return result;
}

int sorted(int n)
{
	int result = 0;
	int currDigitOccurence = 1;
	for (size_t i = 1; i <= 9 ; i++)
	{
		currDigitOccurence = countDigitOcc(n, i);
		result = concatanate(result, i, currDigitOccurence);
	}
	return result;
}
int main()
{
	int n;
	std::cin >> n;

	std::cout << sorted(n);

	return 0; 
}
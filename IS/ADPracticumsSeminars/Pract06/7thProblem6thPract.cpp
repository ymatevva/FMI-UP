#include<iostream>
const int MAX_SIZE = 100;
bool containsDigit(int number, int digit)
{
	while (number != 0)
	{
		if (number % 10 == digit)
		{
			return true;
			break;
		}
		number /= 10;
	}
	return false;
}
void change(int array[MAX_SIZE], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (!containsDigit(array[i], i))
		{
			array[i] = 0;
		}
	}
}
int main()
{
	int n;
	std::cin >> n;

	int array[MAX_SIZE];
	for (size_t i = 0; i < n; i++)
	{
		std::cin >> array[i];
	}

	change(array, n);
	for (size_t i = 0; i < n; i++)
	{
		std::cout << array[i];
	}


	return 0;
}
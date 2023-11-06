#include<iostream>
const int MAX_SIZE = 50;


void sumAndPositive(int array[], int n)
{
	int posEl = 0;
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		if (posEl == 0 && array[i] > 0)
			posEl = array[i];

		else if (posEl != 0)
		{
			sum += array[i];
		}
	}
	std::cout << posEl << " " << sum;
}
int main()
{
	int n;
	std::cin >> n;

	int array[MAX_SIZE];

	for (int i = 0; i < n; i++)
	{
		std::cin >> array[i];
	}

	sumAndPositive(array, n);
	return 0;
}
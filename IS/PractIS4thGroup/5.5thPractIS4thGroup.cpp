#include<iostream>
const int MAX_SIZE = 50;

void reverse(int array[], int n)
{
	int temp[MAX_SIZE];
	for (int i = 0; i < n; i++)
	{
		temp[i] = array[n - i - 1];
	}

	for (int i = 0; i < n; i++)
	{
		array[i] = temp[i];
	}
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

	reverse(array, n);

	for (int i = 0; i < n; i++)
	{
		std::cout << array[i] << " ";
	}
	return 0;
}
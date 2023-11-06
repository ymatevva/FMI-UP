#include<iostream>
const int MAX_SIZE = 50;

bool twoZeros(int array[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (array[i] == 0 && array[i+1] == 0)
			return false;
	}
	return true;
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

	std::cout << std::boolalpha << twoZeros(array, n);

	return 0;
}
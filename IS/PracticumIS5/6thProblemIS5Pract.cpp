#include<iostream>
const int MAX_SIZE = 50;

void occSymbol(int array[], int n, int element)
{
	bool isFound = false;
	int timesInArray = 0;

	for (int i = 0; i < n; i++)
	{
		if (array[i] == element)
		{
			isFound = true;
			timesInArray++;
		}
	}
	if (isFound)
		std::cout << "found: " << timesInArray;
	else
		std::cout << "not found" << std::endl;
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

	int element;
	std::cin >> element;

	occSymbol(array, n, element);

	return 0;
}
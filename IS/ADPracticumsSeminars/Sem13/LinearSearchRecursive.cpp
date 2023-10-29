#include<iostream>
const int MAX_SIZE = 50;
bool isInIt(int array[], int n, int element)
{
	if (n == 0)
		return 0;
	return element == array[0] ? 1 : isInIt(array + 1, n - 1, element);
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

	std::cout << std::boolalpha << isInIt(array, n, element);

	return 0;
}
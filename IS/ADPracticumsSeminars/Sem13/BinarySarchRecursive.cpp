#include<iostream>
const int MAX_SIZE = 50;
bool binarySearch(int array[], int n, int element)
{
	if (n == 0)
		return 0;

	unsigned int mid = n / 2;

	if (array[mid] == element)
		return true;
	else if (array[mid] > element)
		return binarySearch(array, n, element);
	else
		return
		binarySearch(array + mid + 1, n - mid - 1, element);
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

	std::cout << std::boolalpha << binarySearch(array, n, element);
	return 0;
}
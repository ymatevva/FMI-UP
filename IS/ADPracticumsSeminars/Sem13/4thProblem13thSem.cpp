#include<iostream>
const int MAX_SIZE = 50;
int sum(int array[], int n)
{
	if (n == 0)
		return 0;

	return array[0] + sum(array + 1, n - 1);
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
	std::cout << sum(array, n);


	return 0;
}
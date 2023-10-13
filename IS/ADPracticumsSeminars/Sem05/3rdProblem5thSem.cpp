#include <iostream>
const int MAX_SIZE = 50;
int GCD(int a, int b)
{
	if (b == 0)
		return a;
	return GCD(b, a % b);
}
int LCM(int a, int b)
{
	return (a * b) / GCD(a, b);
}
int findLCM(int arr[], int size)
{
	if (size < 2)
	{
		return -1;
	}
	int result = arr[0];
	for (size_t i = 1; i <  size; i++)
	{
		result = LCM(result, arr[i]);
	}
	return result;
}
int main()
{

	int n;
	std::cin >> n;

	int arr[MAX_SIZE];
	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	int LCM = findLCM(arr, n);
	std::cout << LCM << std::endl;








	return 0;
}
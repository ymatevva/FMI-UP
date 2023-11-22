#include<iostream>

int onlyOnceOccured(const int arr[], size_t size)
{
	int res = 0;
	for (size_t i = 0; i < size; i++)
	{
		res ^= arr[i];
	}
	return res;
}
int main()
{
	constexpr int MAX_SIZE = 7;

	unsigned int n;
	std::cin >> n;


	int arr[MAX_SIZE];

	for (size_t i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	std::cout << onlyOnceOccured(arr, n);

	return 0;
}
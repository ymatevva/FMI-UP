#include<iostream>

bool canGoToTheEnd(const int arr[], size_t length)
{
	unsigned int sum = 0;
	for (size_t i = 0; i < length; i++)
	{
		sum += arr[i];
	}
	return sum == length;
}
void canWalkItAll(const int arr[], size_t length)
{
	bool possible = canGoToTheEnd(arr, length);

	std::cout << (possible ? "Yes" : "No") << std::endl;
}
int main()
{
	constexpr int MAX_SIZE = 1024;

	unsigned int n;
	std::cin >> n;

	int arr[MAX_SIZE];

	for (size_t i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	canWalkItAll(arr, n);

	return 0;
}
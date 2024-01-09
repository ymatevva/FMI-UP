#include<iostream>
constexpr int MAX_SIZE = 100;

int sumArr(const int* arr, size_t length)
{
	if (length == 0)
		return 0;

	return arr[0] + sumArr(arr + 1, length - 1);
}
int main()
{
	unsigned int n;
	std::cin >> n;

	int arr[MAX_SIZE];
	for (size_t i = 0; i < n; i++)
		std::cin >> arr[i];

	std::cout << sumArr(arr, n);

	return 0;
}
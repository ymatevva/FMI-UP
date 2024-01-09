#include<iostream>
constexpr int MAX_SIZE = 100;

bool isInIt(const int* arr, size_t length, int element)
{
	if (length == 0)
		return false;

	return arr[0] == element || isInIt(arr + 1, length - 1, element);
}
int main()
{
	unsigned int n;
	std::cin >> n;

	int arr[MAX_SIZE];
	for (size_t i = 0; i < n; i++)
		std::cin >> arr[i];


	int element;
	std::cin >> element;

	std::cout << isInIt(arr, n, element) << std::endl;
	return 0;
}
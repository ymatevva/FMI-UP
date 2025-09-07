#include<iostream>
constexpr int MAX_SIZE = 100;

void replace(int* arr, size_t n, int findWhat, int replaceWith);
int main()
{
	unsigned int n;
	std::cin >> n;

	int arr[MAX_SIZE];
	for (size_t i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	int findWhat, replaceWith;
	std::cin >> findWhat >> replaceWith;

	replace(arr, n, findWhat, replaceWith);

	for (size_t i = 0; i < n; i++)
	{
		std::cout << arr[i] << " ";
	}

	return 0;
}

void replace(int* arr, size_t n, int findWhat, int replaceWith)
{
	for (size_t i = 0; i < n; i++)
	{
		if (arr[i] == findWhat)
			arr[i] = replaceWith;
	}
	
}
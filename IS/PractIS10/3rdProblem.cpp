#include<iostream>
constexpr int MAX_SIZE = 100;

int main()
{
	unsigned int n;
	std::cin >> n;

	int arr[MAX_SIZE];
	for (size_t i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}


	for (size_t i = 0; i < n; i++)
	{
		std::cout << *(arr + i) << " ";
	}

	std::cout << std::endl;

	int* ptr = arr;

	for (size_t i = 0; i < n; i++)
	{
		std::cout << *(ptr + i) << " ";
	}

	return 0;
}
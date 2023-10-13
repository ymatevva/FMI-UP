#include<iostream>

const int MAX_SIZE = 50;

bool isPalindrome(int array[], int size)
{
	for (size_t i = 0; i < size ; i++)
	{
		if (array[i] != array[size - i - 1])
			return false;
	}

	return true;
}
int main()
{
	int n;
	std::cin >> n;

	int arr[MAX_SIZE];

	for (size_t i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	std::cout << std::boolalpha << isPalindrome(arr, n) << std::endl;



	return 0;
}
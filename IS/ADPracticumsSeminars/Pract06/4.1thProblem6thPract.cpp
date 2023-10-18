#include<iostream>
const int MAX_SIZE = 30;
bool isPalindrome(int array[MAX_SIZE], int n)
{
	for (size_t i = 0; i < n; i++)
	{
		if (array[i] != array[n - i - 1])
		{
			return false;
			break;
		}
	}return true;
}
int main()
{
	int n;
	std::cin >> n;

	int array[MAX_SIZE];
	for (size_t i = 0; i < n; i++)
	{
		std::cin >> array[i];
	}
	std::cout << std::boolalpha << isPalindrome(array, n) << std::endl;

	return 0;
}
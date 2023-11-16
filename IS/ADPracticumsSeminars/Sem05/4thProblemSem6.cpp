#include <iostream>
constexpr int MAX_SIZE = 1024;

bool isPalindrome(int array[], int start, int end)
{
	
	while( start < end)
	{
		if (array[start] != array[end])
			return false;

		start++;
		end--;
	}
	return true;
}

bool areTwoConcatedPalindromes(int array[], int n)
{
	
	for (int i = 0; i < n; i++)
	{
		if (isPalindrome(array, 0, i) && isPalindrome(array,i+1,n-1))
			return true;
	}
	return false;

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

	std::cout << std::boolalpha << areTwoConcatedPalindromes(array, n);
}
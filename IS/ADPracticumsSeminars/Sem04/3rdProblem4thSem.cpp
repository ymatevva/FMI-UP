#include<iostream>

int main()
{
	int n;
	std::cin >> n;


	int reversed = 0;
	int copyN = n;

	while (copyN > 0)
	{
		reversed = reversed * 10 + copyN % 10;
		copyN /= 10;
	}

	bool isPalindrome = false;
	if (reversed == n)
	{
		isPalindrome = true;
	}
	std::cout << std::boolalpha << isPalindrome << std::endl;











	return 0;
}
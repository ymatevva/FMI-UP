#include<iostream>

int main()
{
	int n;
	std::cin >> n;

	int reversed = 0;
	while (n > 0)
	{
		reversed = reversed * 10 + n % 10;
		n /= 10;
	}

	std::cout << reversed << std::endl;


	return 0;
}
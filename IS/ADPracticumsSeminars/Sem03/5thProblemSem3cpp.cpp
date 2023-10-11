#include<iostream>

int main()
{
	int n;
	std::cin >> n;

	while (n % 2 == 0)
	{
		n /= 2;
	}

	std::cout << ( (n == 1) ? "yes" : "no") << std::endl;



	return 0;
}
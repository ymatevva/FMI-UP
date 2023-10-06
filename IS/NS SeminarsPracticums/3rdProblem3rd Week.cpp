#include<iostream>

//GCD of two numbers

int main()
{
	int a, b;
	std::cin >> a >> b;

	int bigger = (a < b) ? b : a;

	for (size_t i = bigger; i >= 1; i--)
	{
		if (a % i == 0 && b % i == 0)
		{
			std::cout << i << " ";
		}
	}


	return 0;
}
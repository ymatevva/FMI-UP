#include<iostream>

int main()
{

	int a, n;
	std::cin >> a >> n;
	int sum = 1;
	for (size_t i = 1; i <= n; i++)
	{
		sum += a * i;
	}

	std::cout << sum << std::endl;

	return 0;
}
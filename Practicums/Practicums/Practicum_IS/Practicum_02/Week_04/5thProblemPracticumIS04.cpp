#include<iostream>

int main()
{
	int n;
	std::cin >> n;

	for (size_t i = 1; i <= n; i++)
	{
		for (size_t j = 1; j <= i; j++)
		{
			std::cout << i << " ";
		}
	}







	return 0;
}
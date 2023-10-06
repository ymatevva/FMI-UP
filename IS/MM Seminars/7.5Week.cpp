#include<iostream>

int main()
{
	int n;
	std::cin >> n;

	for (size_t i = 1; i <= n; i++)
	{
		for (size_t k = 0; k < i; k++)
			{
				std::cout << " ";
			}
		for (size_t j = i; j <= n; j++)
		{
			
			std::cout << j ;
		}

		std::cout << std::endl;
	}

	for (size_t i = n-1; i >= 1; i--)
	{
		for (size_t k = 0; k < i; k++)
		{
			std::cout << " ";
		}
		for (size_t j = i; j <= n; j++)
		{
			std::cout << j ;
		}

		std::cout << std::endl;
	}
	
	






	return 0;
}
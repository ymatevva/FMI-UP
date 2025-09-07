#include<iostream>

int main()
{
	int n;
	std::cin >> n;

	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			if (i == j)
				std::cout << "0" << " ";
			
			else if (i > j)
				std::cout << "-" << " ";
			else
				std::cout << "+" << " ";
		}
		std::cout << std::endl;
	}





	return 0;
}
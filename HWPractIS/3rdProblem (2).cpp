#include<iostream>

void printChristmasTree(unsigned int n)
{
	unsigned int shifts = n;
	for (size_t p = 0; p < shifts; p++)
	{
		std::cout << " ";
	}

	std::cout << "|" << std::endl;

	for (size_t rows = 1; rows <= n; rows++)
	{
		unsigned int shifts = n - rows;
		for (size_t p = 0; p < shifts; p++)
		{
			std::cout << " ";
		}

		for (size_t j = 1; j <= rows; j++)
			std::cout << "*";

		std::cout << "|";

		for (size_t k = 1; k <= rows; k++)
			std::cout << "*";


		std::cout << std::endl;
	}
}


int main()
{
	unsigned int n;
	std::cin >> n;

	printChristmasTree(n);

	return 0;
}
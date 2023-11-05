#include <iostream>

void printFigure(int n)
{

	int counter = 1;

	for (int i = 1; i <= n+2; i++)
	{
		std::cout << "#" << " ";
	}

	std::cout << std::endl;
	for (int i = 1; i <= n; i++)
	{
		std::cout << "#" << " ";
		if (i % 2 != 0)
		{
			for (int j = counter; j <= i*n; j++)
			{
				std::cout << j << " ";;
			}
		}

		else
		{
			for (int j = i*n; j >= counter; j--)
			{
				std::cout << j << " ";
			}
		}
		counter += n;

		std::cout << "#" << " ";
		std::cout << std::endl;
	}

	for (int i = 1; i <= n+2; i++)
	{
		std::cout << "#" << " ";
	}



}





int main()
{
	int n;
	std::cin >> n;

	printFigure(n);

	return 0;
}
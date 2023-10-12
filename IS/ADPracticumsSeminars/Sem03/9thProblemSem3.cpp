#include<iostream>

int main()
{

	int n;
	std::cin >> n;

	for (size_t i = 1; i <= n ; i++)
	{
       int shifts = (n - i);
	   for (size_t j = 1; j <= shifts; j++)
	   {
		   std::cout << " ";
	   }
	   for (size_t j = i; j >= 1; j--)
	   {
		   std::cout << j;
	   }
	   std::cout << std::endl;
	}
	for (size_t i = n -1; i >= 1; i--)
	{
		int shifts = (n - i);
		for (size_t j = 1; j <= shifts; j++)
		{
			std::cout << " ";
		}
		for (size_t j = i; j >= 1; j--)
		{
			std::cout << j;
		}
		std::cout << std::endl;
	}








	return 0;
}
#include<iostream>

int main()
{
	int n;
	std::cin >> n;

	char a, b;
	std::cin >> a >> b;
    
		int countFirst = 1;
	    int countSecond = n - 1;
	
			
	for (size_t rows = 1; rows <= n - 1; rows++)
	{   
			for (size_t i = 1; i <= countFirst; i++)
			{
				std::cout << a << " ";
			}
			for (size_t i = 1; i <= countSecond; i++)
			{
				std::cout << b << " ";
			}	
			

		std::cout << std::endl;
		countFirst++;
		countSecond--;
	}


	return 0;
}
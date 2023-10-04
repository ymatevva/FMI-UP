#include<iostream>

int main()
{
	int n;
	std::cin >> n;

	int i = 1;
	while (i*i < n)
		{
          std::cout << i * i << std::endl;
		  i++;
		}
		
	


	return 0;
}
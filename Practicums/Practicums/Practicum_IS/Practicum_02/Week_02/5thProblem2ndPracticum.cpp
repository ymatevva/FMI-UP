#include<iostream>

int main()
{

	int a, b;
	std::cin >> a >> b;

	if (a == 0 || b == 0 || -b%a != 0)
	{
		std::cout << "no" << std::endl;
	}
	else if (a == 0 && b == 0)
	{
		std::cout << "inf" << std::endl;
	}
	else
	{
		std::cout << "one solving: " << -b/a;
	}





	return 0;
}
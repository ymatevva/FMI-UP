#include<iostream>


int main()
{

	double a, b;
	std::cin >> a >> b;

	int bigger = (a > b) ? a : b;
	std::cout << bigger << std::endl;



	return 0;
}
#include<iostream>

int main()
{
	int x, a, b;
	std::cin >> x >> a >> b;

	bool isInTheInterval = (x >= a && x <= b);
	std::cout << std::boolalpha << isInTheInterval << std::endl;
	


	return 0;
}
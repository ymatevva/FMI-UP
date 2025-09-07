#include<iostream>

int main()
{

	int a, b;
	std::cin >> a >> b;

	float c, d;
	std::cin >> c >> d;

	std::cout << &a << " " << &b << " " <<  &c << " " << &d;


	return 0;
}
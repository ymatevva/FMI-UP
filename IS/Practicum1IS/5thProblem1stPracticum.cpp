#include<iostream>

int main()
{

	int a, b, c;
	std::cin >> a >> b >> c;

	bool canBeFormed = (a + b > c && a + c > b && b + c > a);
	std::cout << std::boolalpha << canBeFormed << std::endl;



	return 0;
}
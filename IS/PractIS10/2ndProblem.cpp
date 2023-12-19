#include<iostream>

int main()
{
	int a;
	std::cin >> a;

	int* ptr = &a;

	++*ptr;
	std::cout << a;


	return 0;
}
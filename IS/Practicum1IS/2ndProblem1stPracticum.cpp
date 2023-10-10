#include<iostream>
//2 ways

int main()
{
	int a, b;
	std::cin >> a >> b;

	int temp = a;
	a = b;
	b = temp;
	std::cout << a << " " << b << std::endl;

	a = a + b;
	b = a - b;
	a = a - b;
	std::cout << a << " " << b << std::endl;





	return 0;
}
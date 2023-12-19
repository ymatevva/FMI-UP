#include<iostream>

void change(int& a, int& b);
int main()
{
	int a, b;
	std::cin >> a >> b;

	change(a, b);
	std::cout << a << " " << b;


	return 0;
}
void change(int& a, int& b)
{
	a += 4;
	b += 4;
}
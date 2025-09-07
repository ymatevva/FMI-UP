#include<iostream>

void increase(int* a, int* b);
int main()
{
	int a, b;
	std::cin >> a >> b;

	int* ptrA = &a;
	int* ptrB = &b;

	increase(ptrA, ptrB);

	std::cout << a << " " << b;
	return 0;
}

void increase(int* a, int* b)
{
	 *a+=4;
	 *b+=4;
}
#include<iostream>

int fibb(int n)
{
	if (n == 0 || n == 1)
		return 1;

	return fibb(n - 1) + fibb(n - 2);
}
int main()
{
	 int n;
	std::cin >> n;

	std::cout << fibb(n) << std::endl;

	return 0;
}
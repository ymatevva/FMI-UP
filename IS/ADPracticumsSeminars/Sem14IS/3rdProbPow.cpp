#include<iostream>

int powOfN(int n, unsigned int k)
{
	if (k == 0)
		return 1;

	return n*powOfN(n,k-1);
}

int main()
{
	int n;
	std::cin >> n ;


	unsigned int k;
	std::cin >> k;


	std::cout << powOfN(n, k) << std::endl;


	return 0;
}
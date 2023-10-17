#include<iostream>

int main()
{
	int a, n;
	std::cin >> a >> n;

	int result = 1;
	for (size_t i = 1; i <= n ; i++)
	{
		result *= a;
	}


	std::cout << result;



	return 0;
}
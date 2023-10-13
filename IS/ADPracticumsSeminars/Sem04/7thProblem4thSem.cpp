#include<iostream>

int main()
{

	int n, k;
	std::cin >> n >> k;

	int result = 1;
	for (size_t i = 1; i <= k; i++)
	{
		result *= n;
	}
	std::cout << result << std::endl;


	return 0;
}
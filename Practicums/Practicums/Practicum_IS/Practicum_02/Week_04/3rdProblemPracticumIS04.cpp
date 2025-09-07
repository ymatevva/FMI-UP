#include<iostream>

bool divisor(int a, int b)
{
	int smaller = a < b ? a : b;
	int bigger = a > b ? a : b;

	int i = 2;
	while (i < smaller)
	{
		if (smaller % i == 0 && bigger % (i*i) == 0)
		{
			return true;
			break;
		}
		i++;
	}
	return false;
}
int main()
{
	int a, b;
	std::cin >> a >> b;

	std::cout << std::boolalpha << divisor(a, b);
		
	return 0;
}
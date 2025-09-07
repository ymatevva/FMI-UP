#include<iostream>
bool containsOne(int number)
{
	while (number != 0)
	{
		if (number%10 == 1)
		{
			return true; 
			break;
		}
		number /= 10;
	}
	return false;
}
int main()
{
	int n;
	std::cin >> n;
	std::cout << std::boolalpha << containsOne(n);


	return 0;
}
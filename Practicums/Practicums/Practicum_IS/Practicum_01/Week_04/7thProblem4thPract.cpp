#include<iostream>

bool square(int number)
{
	for (size_t i = 1; i <= number; i++)
	{
		if (i * i == number) {
			return true;
		}
	}
	return false;
}

int main()
{
	int n;
	std::cin >> n;
	std::cout << std::boolalpha << square(n) << std::endl;





	return 0;
}
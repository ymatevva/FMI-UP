#include<iostream>

int reverse(int number)
{
	int result = 0;
	while (number != 0)
	{
		result = result*10 + number % 10;
		number /= 10;
	}
	return result;
}
int concat(int first, int second)
{
	int reversed = reverse(second);
	
	while (reversed != 0)
	{
		first = first * 10 + reversed % 10;
		reversed /= 10;
	}
	return first;
}
int main()
{
	int first, second;
	std::cin >> first >> second;
	std::cout << concat(first, second) << std::endl;


	return 0;
}
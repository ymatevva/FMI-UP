#include<iostream>

int sumDigits(int number)
{
	int sum = 0;
	while (number != 0)
	{
		sum += number % 10;
		number /= 10;
	}
	return sum;
}
int main()
{
	int n;
	std::cin >> n;

	while (n > 9)
	{
		n = sumDigits(n);
	}

	std::cout << n;





	return 0;

}
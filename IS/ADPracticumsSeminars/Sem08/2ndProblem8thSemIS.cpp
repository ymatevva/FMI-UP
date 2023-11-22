#include<iostream>


unsigned int numberOfOnes(unsigned int n)
{
	unsigned int count = 0;
	while (n != 0)
	{
		if (n & 1)
			count++;

		n >>= 1;
	}
	return count;
}
int main()
{
	unsigned int n;
	std::cin >> n;


	std::cout << numberOfOnes(n);

	return 0;
}
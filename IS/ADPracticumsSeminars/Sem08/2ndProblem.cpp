#include<iostream>

unsigned int countOnes(unsigned int n)
{
	unsigned int mask = 1;
	unsigned int count = 0;

	while (n != 0)
	{
		if (n & mask)
			count++;

		n >>= 1;
	}
	return count;
}

int main()
{
	unsigned int n;
	std::cin >> n;

	std::cout << countOnes(n);
}
#include<iostream>
#include<cassert>

int main()
{

	int n;
	std::cin >> n;
	assert(n >= 2);

	int number;
	int biggest = INT_MIN;
	int secBiggest = INT_MIN;

	for (size_t i = 1; i <= n; i++)
	{
		std::cin >> number;
		if (number >= biggest)
		{
			secBiggest = biggest;
			biggest = number;
		}
		else if (number > secBiggest && number < biggest)
		{
			secBiggest = number;
		}
	}
	
	std::cout << biggest << " " << secBiggest << std::endl;
	









	return 0;
}
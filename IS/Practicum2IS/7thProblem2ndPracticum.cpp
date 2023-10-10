#include<iostream>

int main()
{
	int n;
	std::cin >> n;

	int biggest = INT_MIN;
	int copyOfN = n;//do not forget this 

	while (copyOfN > 0)
	{
		if (copyOfN % 10 >= biggest)
		{
			biggest = copyOfN % 10;
		}

		copyOfN /= 10;
	}

	int firstDigit = (n / 1000)%10;
	bool check = (firstDigit % 2 != 0 && firstDigit == biggest);
	std::cout << std :: boolalpha << check << std::endl;



	return 0;
}
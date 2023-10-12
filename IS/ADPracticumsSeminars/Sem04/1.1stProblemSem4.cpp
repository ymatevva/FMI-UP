#include<iostream>

int main()
{
	int n;
	std::cin >> n;

	for (size_t i = 6; i < n; i+=6)
	{
		int firstCheck = i - 1;
		int secondCheck = i + 1;

		bool firstPrime = true;
		double temp1 = sqrt(firstCheck);

		for (size_t j = 2; j <= temp1; j++)
		{
			if (firstCheck % j == 0)
			{
				firstPrime = false;
			}
		}

		if (!firstPrime)
		{
			continue;
		}

		bool secondPrime = true;
		double temp2 = sqrt(secondCheck);

		for (size_t j = 2; j <= temp2; j++)
		{
			if (secondCheck % j == 0)
			{
				secondPrime = false;
			}
		}

		
       if (secondPrime)
		{
			std::cout << firstCheck << " " << secondCheck << std::endl;
		}
	}











	return 0;
}
#include<iostream>

int countDigits(int number)
{
	int count = 0;
	while (number > 0)
	{
		count++;
		number /= 10;
	}
	return count;
}

int main()
{
	int n, k;
	std::cin >> n >> k;

	int number = n / 10;
	bool isInf;
   
	while (countDigits(number) > 1)
	{
		 while (countDigits(k) > 0 )
		{  
			int copyN = number;
			int lastDigitK = k % 10;
		    int lastDigitN = copyN % 10;

			if (lastDigitK != lastDigitN)
			{
				isInf = false;
				break;
			}
			else
			{
				k /= 10;
				copyN /= 10;
			}
		}
		 if (isInf)
		 {
           std::cout << std::boolalpha << isInf << std::endl;
           break;
		 }

		(number) /= 10;
	}
		
	if (!isInf)
	{
		std::cout << " no " << std::endl;
	}



	return 0;
}
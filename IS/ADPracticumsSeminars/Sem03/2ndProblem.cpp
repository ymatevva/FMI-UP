#include<iostream>

int main()
{
	int number;
	std::cin >> number;

	
    int smallestDigit = INT_MAX;
	int maxOccurenceCount = INT_MIN;
	
	
	while (number > 0)
	{
        int lastDigit = number % 10;
        int occurences = 0;
        int copiedNum = number;

		while (copiedNum > 0)
		{
			int currDigit = copiedNum % 10;
			if (lastDigit == currDigit)
			{
				occurences++;
			}
			copiedNum /= 10;
		}

		if (maxOccurenceCount <= occurences && occurences >= 2)
		{
			maxOccurenceCount = occurences;	
			if (lastDigit <= smallestDigit)
			{
			   smallestDigit = lastDigit;
			}
		}

		number /= 10;
	}


	std::cout << smallestDigit << std::endl;


	return 0;
}
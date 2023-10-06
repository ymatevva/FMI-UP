#include<iostream>

bool isAscending(int number)
{
   
	while (number > 9)
	{
		int currDigit = number % 10;
		int prevDigit = (number / 10) % 10;
		if (prevDigit > currDigit)
		{
			return false;
			break;
		}
		number /= 10;
	}
    return true;
}
bool isDescending(int number)
{
	while (number > 9)
	{
		int currDigit = number % 10;
		int prevDigit = (number / 10) % 10;
		if (prevDigit < currDigit)
		{
			return false;
			break;
		}
		number /= 10;
	}
	return true;
}

int main()
{
	int number;
	std::cin >> number;

	if (isAscending(number) && !isDescending(number))
	{
		std::cout << "It is ascdening";
	}

	else if (!isAscending(number) && isDescending(number))
	{
		std::cout << "It is descdening";
	}

	if ((!isAscending(number) && !isDescending(number)) || (isAscending(number) && isDescending(number)))
	{
		std::cout << "It is neither ascdening nor descending";
	}

	return 0;
}
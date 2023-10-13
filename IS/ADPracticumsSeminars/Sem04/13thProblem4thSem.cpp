#include<iostream>
int digits(int number)
{
	int count = 0;
	while (number > 0)
	{
		count++;
		number /= 10;
	}
	return count;
}
bool isAscending(int number)
{
	while (digits(number)>1)
	{
	   int lastDigit = number % 10;
	   int prevDigit = (number / 10) % 10;

		if (lastDigit < prevDigit)
			return false;

		number /= 10;
	}
	return true;
}
bool isDescending(int number)
{
	
	while (digits(number) > 1)
	{  
		int lastDigit = number % 10;
	    int prevDigit = (number / 10) % 10;

		if (lastDigit > prevDigit)
			return false;
		
		number /= 10;
	}
	return true;
}
bool isSorted(int number)
{
	if (isDescending(number) && !isAscending(number))
	{
		return true;
	}
	else if (!isDescending(number) && isAscending(number))
	{
		return true;
	}
	else if (isAscending(number) && isDescending(number))
	{
		return true;
	}

	return false;
}
int main()
{

	int n;
	std::cin >> n;


	std::cout << std::boolalpha << isSorted(n) << std::endl;

	std::cout << isDescending(n);
	std::cout << isAscending(n);

	return 0;
}
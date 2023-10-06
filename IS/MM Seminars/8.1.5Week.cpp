#include<iostream>
#include<cassert>

int digitsCount(int number)
{
	int count = 0;
	while (number > 0)
	{
		count++;
		number /= 10;
	}
	return count;
}
bool isInfix(int n, int k)
{
	if (digitsCount(k) > digitsCount(n))
		return  false;

	bool isInf = true;
	while (digitsCount(n) >= digitsCount(k))
	{
		int tempK = k;
		int tempN = n;
		while (digitsCount(tempK) > 0)
		{
			
			if (tempN % 10 != tempK % 10)
			{
				isInf = false;
				break;
			}
			else
			{
				tempK /= 10;
				tempN /= 10;
			}
		}
		if (isInf)
		{
			return true;
		}
		else
		{
			n /= 10;
		}
	}

}
int main()
{
	int n, k;
	std::cin >> n >> k;
	assert(k != 0);


	if (isInfix(n, k))
	{
		std::cout << "it is infix" << std::endl;
	}
	else
		std::cout << "it is not infix" << std::endl;

	return 0;
}
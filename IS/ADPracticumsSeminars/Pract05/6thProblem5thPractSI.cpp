#include<iostream>
#include<climits>
#include<cmath>

int myAbs(int n)
{
	return n < 0 ? -n : n;
}
bool isPrime(int n)
{
	if (n <= 1)
		return false;

	double temp = sqrt(n);
	for (int i = 2; i <= temp ; i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}
void swap(unsigned int& a, unsigned int& b)
{
	unsigned int temp = a;
	a = b;
	b = temp;
}
bool hasKPrimeDivisors(unsigned int n, unsigned k)
{
	int count = 0;

	for (int i = 1; i <= n; i++)
	{
		if (isPrime(i) && n % i == 0)
			count++;
	}
	return count == k;
}

void change(unsigned int& a, unsigned int& b, int k)
{
	if (a > b)
		swap(a, b);

	int tempSmallest = INT_MAX;
	int tempBiggest = INT_MIN;

	    for (int i = a; i <= b; i++)
	    {
		   if (hasKPrimeDivisors(i, k) && i < tempSmallest)
			  tempSmallest = i;
	    }

	
		for (int i = b; i >= a; i--)
		{
			if (hasKPrimeDivisors(i, k) && i > tempBiggest)
				tempBiggest= i;
		}

		if (tempBiggest == tempSmallest)
		{
			int diff1 = myAbs( a - tempSmallest);
			int diff2 = myAbs(b - tempSmallest);

			if (diff1 < diff2)
				a = tempSmallest;
			
			else if (diff1 > diff2)
				b = tempSmallest;
		}
		else
		{
			a = tempSmallest < tempBiggest ? tempSmallest : tempBiggest;
			b = tempSmallest > tempBiggest ? tempSmallest : tempBiggest;
		}
}
int main()
{
	unsigned int a = 0, b = 0, k;

	std::cin >> a >> b >> k;

	change(a, b, k);

	std::cout << a << " " << b;
	return 0; 
}
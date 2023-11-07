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
void swap(int& a,  int& b)
{
	 int temp = a;
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

void change(int& a,  int& b, int k)
{
	if (a > b)
		swap(a, b);

	int tempSmallest = INT_MAX;
	int tempBiggest = INT_MIN;

	    for (int i = a+1; i < b; i++)
	    {
		   if (hasKPrimeDivisors(i, k))
			  tempSmallest = i;
	    }

	
		for (int i = b - 1; i > a; i--)
		{
			if (hasKPrimeDivisors(i, k) )
				tempBiggest = i;
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
			if (tempSmallest > tempBiggest)
				swap(tempSmallest, tempBiggest);

			a = tempSmallest;
			b = tempBiggest;
		}
}
int main()
{
	int a = 0, b = 0, k;

	std::cin >> a >> b >> k;

	change(a, b, k);

	std::cout << a << " " << b;
	return 0; 
}
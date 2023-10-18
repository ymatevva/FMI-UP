#include<iostream>
#include<climits>
#include<cmath>
#include<iomanip>

bool isPrime(int num)
{
	if (num <= 1)
	{
		return false;
	}

	double border = sqrt(num);

	for (int i = 2; i <= border ; i++)
	{
		if (num % i == 0)
		{
			return false;
			break;
		}
	}
	return true;
}
bool hasKPrimeDivisors(int num, int k)
{
	int count = 0;
	for (int i = 1; i <= num ; i++)
	{
		if(num % i == 0)
		{
			if (isPrime(i))
			{
				count++;
			}
		}
		if (count > k)
		{
			return false;
			break;
		}
	}
	if (count == k)
	{
		return true;
	}
	return false;
}void biggestSmallest(int& a, int& b, int k) 
{
	int smallest = a;  // Initialize with the maximum possible value
	int largest = b;   // Initialize with the minimum possible value

	for (int i = a; i <= b; i++) {
		if (hasKPrimeDivisors(i, k)) {

			if (i > smallest && smallest == a) {
				smallest = i;
				break;
			}
		}
		
	}
	for (int i = b; i >= a; i--) {
		if (hasKPrimeDivisors(i, k))
		{
			if (i < largest && largest == b) {
				largest = i;
				break;
			}
			
		}

	}

	a = smallest;
	b = largest;
}

int main()
{
	int a = 0, b= 0, k;
	std::cin >> a >> b >> k;

	biggestSmallest(a, b, k);
	std::cout << a << " " << b;


	return 0;
}
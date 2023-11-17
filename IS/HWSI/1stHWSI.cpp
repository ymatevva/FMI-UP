#include<iostream>

void swap(unsigned int& a, unsigned int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
unsigned int countDivisors(unsigned int n)
{
	unsigned int count = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
			count++;
	}
	return count;
}


int pairs(unsigned int n, unsigned int k)
{
	if (n < k)
		swap(n, k);

	unsigned int count = 0;
	for (size_t i = 1; i <= n; i++)
	{
		for (size_t j = i; j <= n; j++)
		{
			if (k * countDivisors(i) * countDivisors(j) == i * j)
				count++;
		}
	}
	return count;
}
int main()
{
	unsigned int n, k;

    std::cin >> n >> k;

	 std :: cout << pairs(n, k);


	return 0;
}
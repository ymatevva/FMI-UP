#include<iostream>
#include<climits>

int squareRoot(int n)
{
	int biggest = 0;
	for (size_t i = 1; i <= n; i++)
	{
		if (i*i <= n)
		{
			if (i > biggest)
			{
				biggest = i;
			}
		}
	}
	return biggest;
}
int main()
{
	int n;
	std::cin >> n;

	std::cout << squareRoot(n);


	return 0;
}
#include<iostream>

void sort3(int& min, int& mid, int& max)
{
	if (min > mid)
	{
		int temp = min;
		min = mid;
		mid = temp;
	}
	if (mid > max)
	{
		int temp = mid;
		mid = max;
		max = temp;
	}
	if (min > mid)
	{
		int temp = min;
		min = mid;
		mid = temp;
	}
}
int main()
{
	int a, b, c = 0;
	std::cin >> a >> b >> c;
	sort3(a, b, c);
	std::cout << a << " " << b << " " << c << std::endl;
	return 0;
}
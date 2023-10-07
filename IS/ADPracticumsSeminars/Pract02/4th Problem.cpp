#include<iostream>

int main()
{
	int a, b, c;
	std::cin >> a >> b >> c;

	int biggest = (a > b) && (a > c) ? a : ((b > c) ? b : c);

	int smallest = (a < b) && (a < c) ? a : ((b < c) ? b : c);
	int mid = (a != biggest && a != smallest) ? a : ((b != biggest && b != smallest) ? b : ((c != biggest && c != smallest) ? c : 0));

	int number = biggest * 100 + mid * 10 + smallest;
	std::cout << number;





	return 0;
}
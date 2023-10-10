#include<iostream>

int main()
{

	int a, b, c;
	std::cin >> a >> b >> c;

	
    
	int biggest = (a > b && a > c) ? a : ((b > c) ? b : c);
	int smallest = (a < b && a < c) ? a : ((b < c) ? b : c);
	
	std::cout << biggest << " " << smallest << std::endl;
	return 0;
}
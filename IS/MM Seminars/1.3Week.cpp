#include<iostream>

int main()
{

	int number;
	std::cin >> number;
	std :: string result =  (number % 2 == 0) ? "even" : "odd" ;
	std::cout << result << std :: endl;

	return 0;
}
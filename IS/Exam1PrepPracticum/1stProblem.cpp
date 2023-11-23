#include<iostream>

double income(unsigned int people, double price)
{
	if (people < 5)
		return price*people;

	double income = price * people;

	if (people >= 5 && people <= 10)
		income = income - 0.05 * income;

	else if (people >= 11 && people <= 20)
		 income = income - 0.10 * income;

	else
		 income = income - 0.15 * income;
	
	return income;
}
int main()
{
	unsigned int people;
	std::cin >> people;

	double priceTicket;
	std::cin >> priceTicket;

	std::cout << income(people, priceTicket);

	return 0;
}
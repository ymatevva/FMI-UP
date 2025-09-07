#include<iostream>

int main()
{
	int numberPeople;
	double priceForTicket;
	std::cin >> numberPeople >> priceForTicket;

	double totalPrice = numberPeople * priceForTicket;

	if (numberPeople >= 5 && numberPeople <= 10)
		totalPrice = totalPrice - 0.05 * totalPrice;

	else if (numberPeople >= 11 && numberPeople <= 20)
		totalPrice = totalPrice - 0.10 * totalPrice;

	else if (numberPeople >= 21)
		totalPrice = totalPrice - 0.15 * totalPrice;

	std::cout << totalPrice << std::endl;


	return 0;
}
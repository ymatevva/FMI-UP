#include<iostream>

int main()
{
	bool SSD;
	int price;
	int USB;
	int RAM;

	std::cin >> SSD;
	std::cin >> price >> USB >> RAM;

	bool willBuy = (price >= 1000 && price <= 1500) && RAM >= 8 && USB >= 3 && ((RAM >= 8 && SSD) || price <= 800);

	std::cout << "He will buy  " << std::boolalpha << willBuy << std::endl;



	return 0;
}
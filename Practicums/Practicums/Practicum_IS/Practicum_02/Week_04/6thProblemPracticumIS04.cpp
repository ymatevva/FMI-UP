#include<iostream>

int main()
{
	bool isOld;
	std::cin >> isOld;

	bool hasAirCond;
	std::cin >> hasAirCond;

	double power, probeg, price;
	std::cin >> power >> probeg >> price;

	bool willBuy = ((isOld && hasAirCond && probeg < 115000 && power >= 70 && price <= 6000) || (isOld && !hasAirCond && probeg < 180000 && power >= 60 && price <= 2000)) || !isOld && power >= 70 && power <= 90 && price <= 25000;

	std::cout << std::boolalpha << willBuy;





	return 0;
}
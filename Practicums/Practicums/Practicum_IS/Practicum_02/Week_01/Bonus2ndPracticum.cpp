#include<iostream>

int main()
{

	int tomato, peppers, carrots, olives, potatoes, flavoringAgent;
	std::cin >> tomato >> peppers >> carrots >> olives >> potatoes >> flavoringAgent;

	bool frend;
	std::cin >> frend;

	bool eat =
		   (tomato >= 2 && peppers >= 3 && carrots >= 5 && olives >= 6 && potatoes >= 3 && flavoringAgent >= 200 && frend)
		|| (tomato >= 5 && peppers >= 6 && carrots >= 12 && olives >= 7 && potatoes >= 12 && flavoringAgent >= 300 && frend)
		|| (tomato >= 1 && peppers >= 2 && carrots >= 4 && olives >= 3 && potatoes >= 3 && flavoringAgent >= 150);



	std::cout << std::boolalpha << eat << std::endl;





	return 0;
}
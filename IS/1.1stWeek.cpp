#include<iostream>

int main()
{

	double glueMililitres;
	int numberWood;
	double paintMililitres;

	std::cin >> glueMililitres >> numberWood >> paintMililitres;

	int totalProducts = 0;

	while (glueMililitres >= 10 && numberWood >=4 && paintMililitres >= 20)
	{
		totalProducts += 1;
		glueMililitres -= 10;
		numberWood -= 4;
		paintMililitres -= 20;
	}

	bool toy = (glueMililitres >= 3 && numberWood >= 2 && paintMililitres >= 7);
	
	std::cout << "The products that can be made are: " << totalProducts << std::endl;
	std::cout << "A toy can be made: " << std::boolalpha << toy << std::endl;

	return 0;
}
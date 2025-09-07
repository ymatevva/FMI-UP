#include<iostream>

int main()
{
	int r, x, y;
	std::cin >> r >> x >> y;

	int distance = sqrt(pow(0 - x, 2) + pow(0 - y, 2));
	if (distance < r)
	{
		std::cout << "The point is inside" << std::endl;
	}
	 else if (distance > r)
	{
		std::cout << "The point is outside" << std::endl;
	}
	 else
	{
		std::cout << "The point is on the contour" << std::endl;
	}

	//radius = sqrt (( 0 - x)^2 + (( 0 - y) ^2))














	return 0;
}
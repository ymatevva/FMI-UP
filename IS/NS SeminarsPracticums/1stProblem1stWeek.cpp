#include<iostream>

int main()
{
	int a, b, c, d;
	std::cin >> a >> b >> c >> d;

	bool isInside1 = ((c > a && c < b) && !(d > a && d < b));
	bool isInside2 = (!(c > a && c < b) && (d > a && d < b));


	bool result = (isInside1 || isInside2);
	std::cout << result << std::endl;

	return 0;
}
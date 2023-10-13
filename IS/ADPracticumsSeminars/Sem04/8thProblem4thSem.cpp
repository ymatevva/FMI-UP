#include<iostream>

double distBetweenTwoPoints(int a, int b, int c, int d)
{
	int dx = b - a;
	int dy = d - c;
	return sqrt(dx * dx + dy * dy);
}

int myAbs(int number)
{
	if (number < 0)
	{
		return number * -1;
	}
	return number;
}

bool areOnCircle(int a, int b, int c, int d)
{
	return myAbs( distBetweenTwoPoints(a, b,0 ,0 ) - distBetweenTwoPoints(c, d,0,0) <= 0.00001);
}

int main()
{
	int a, b, c, d;
	std::cin >> a >> b >> c >> d;


	std::cout << std::boolalpha << areOnCircle(a, b, c, d) << std::endl;








	return 0;
}
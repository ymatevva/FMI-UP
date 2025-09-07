#include<iostream>
#include<cmath>

int main()
{

	int x1, y1, x2, y2, x3, y3, r;
	std :: cin >>  x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> r;

	int firstCheck = sqrt(x1 * x1 + y1 * y1);
	int secCheck = sqrt(x2 * x2 + y2 * y2);
	int thirdCheck = sqrt(x3 * x3 + y3 * y3);

	if (firstCheck < r && secCheck < r && thirdCheck < r)
	{
		std::cout << "Yes";
	}
	else
		std::cout << " no";




	return 0;
}
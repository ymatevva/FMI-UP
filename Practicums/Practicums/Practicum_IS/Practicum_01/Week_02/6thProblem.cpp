#include<iostream>


int main()
{
	int a, b, c, d, e;
	std::cin >> a >> b >> c >> d >> e;

	bool isTrion = false;

	if ( (b <= a && b <= c) || (b >= a && b >= c))
	{
		if ((c <= b && c <= d) || (c >= b && c >= d))
		{
			if ((d <= c && d <= e) || (d >= c && d >= e))
			{
				isTrion = true;
			}
		}
	}

	if (isTrion)
	{
		std::cout << "yes";
	}
	else
		std::cout << "no" << std::endl;





	return 0;
}
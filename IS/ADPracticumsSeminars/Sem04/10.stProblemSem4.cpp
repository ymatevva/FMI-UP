#include<iostream>
int reverse(int number)
{
	int reversed = 0;
	while (number > 0)
	{
		reversed = reversed * 10 + number % 10;
		number /= 10;
	}
	return reversed;
}
int myAbs(int number)
{
	if (number < 0)
	{
		return number * -1;
	}
	return number;
}
int count(int number)
{
	int count = 0;
	while (number > 0)
	{
		count++;
		number /= 10;
	}
	return count;
}
double perimeter(int x1, int y1, int x2, int y2, int x3, int y3)
{
	double firstSide = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	double secondSide = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	double thirdSide = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
	return firstSide + secondSide + thirdSide;
}

int concatanate(int num1, int num2)
{
	int newNum = 0;
	int num1reversed = reverse(num1);
	int num2reversed = reverse(num2);
	while (num1reversed > 0)
	{
		newNum = newNum * 10 + num1reversed % 10;
		num1reversed /= 10;
	}
	while (num2reversed > 0)
	{
		newNum = newNum * 10 + num2reversed % 10;
		num2reversed /= 10;
	}
	return newNum;
}

int main()
{
	/*double x1, y1, x2, y2, x3, y3;

	std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	
	std :: cout << perimeter(x1, y1, x2, y2, x3, y3);
	*/
	int num1, num2;
	std::cin >> num1 >> num2;

	std :: cout << concatanate(num1, num2);


	return 0;
}

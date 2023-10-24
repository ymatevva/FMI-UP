#include<iostream>

int reverse(int number)
{
	int result = 0;
	while (number != 0)
	{
		result = result * 10 + number % 10;
		number /= 10;
	}
	return result;
}
int myAbs(int num)
{
	return (num < 0) ? num * -1 : num;
}
int countDigits(int num)
{
	int count = 0;
	while (num != 0)
	{
		count++;
		num /= 10;
	}
	return count;
}
void turnIntoNum(int num, int& hours, int& minutes)
{
	hours = 0;
	minutes = 0;
	int reversed = reverse(num);
	int digits = countDigits(num);
	if (digits == 4)
	{
		int i = 1;
		while ( i < 3)//while it has two digits
		{
			hours = hours * 10 + reversed % 10;
			reversed /= 10;
			i++;
		}
		while (i < 5)
		{
			minutes = minutes * 10 + reversed % 10;
			reversed /= 10;
			i++;
		}
	}
	else if (digits == 2 || digits == 1)
	{
		minutes = num;
	}

	else if (digits == 3)
	{
		int i = 1;
		while (i  < 2)//while it has two digits
		{
			hours = hours * 10 + reversed % 10;
			reversed /= 10;
			i++;
		}
		while (i < 4)
		{
			minutes = minutes * 10 + reversed % 10;
			reversed /= 10;
			i++;
		}
	}
}
bool validate(int num1, int num2)
{
	int hours1 = 0;
	int minutes1 = 0;
	turnIntoNum(num1, hours1, minutes1);

	if (hours1 <= 0 || hours1 >= 23 || minutes1 <= 0 || minutes1 >= 59)
		return false;
	
	int hours2 = 0;
	int minutes2 = 0;
	turnIntoNum(num2, hours2, minutes2);

	if (hours2 <= 0 || hours2 >= 23 || minutes2 <= 0 || minutes2 >= 59)
	return false;
	
	return true;

}
void diff(int num1, int num2)
{
	if (validate(num1,num2))
	{
		std::cout << "Valid timestamps, difference: ";

		int resHours = 0;
		int resMinutes = 0;

		int result = myAbs(num1 - num2);
		turnIntoNum(result, resHours, resMinutes);

		std::cout << resHours << " hours and ";
		if (resMinutes < 10)
		{
			std::cout << "0";
		}
		
		std::cout << resMinutes << " minutes " << std::endl;
	}
	else
	{
		std::cout << "Not a valid timestamp" << std::endl;
	}
}
int main()
{
	int num1, num2; //with four digits
	std::cin >> num1 >> num2;
	diff(num1, num2);

	return 0;
}
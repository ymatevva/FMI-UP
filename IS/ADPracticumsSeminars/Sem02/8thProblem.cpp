#include<iostream>
#include<cassert>
//time after 15 minutes

int main()
{
	int hour, minutes;
	std::cin >> hour >> minutes;
	assert(hour >= 0 && hour <= 23);
	assert(minutes >= 0 && minutes <= 59);

	int newMinutes = minutes += 15;
	int newHour = hour += newMinutes / 60;
	newMinutes = minutes % 60;

	if (newHour >= 24)
	{
		newHour = newHour % 24;
	}

	if (newHour <= 9)
	{
		std::cout << "0" << newHour;
	}
	else
	{
		std::cout << newHour;
	}
	std::cout << " : ";
	if (newMinutes <= 9)
	{
		std::cout << "0" << newMinutes;
	}
	else
	{
		std::cout << newMinutes;
	}
	



	return 0;
}
#include<iostream>


int main()
{
	int number;
	std::cin >> number;

	int minute = 60;
	int hour = minute*60;
	int day = hour*24;
	
	int days = number / day;
	int hours = (number%day)/ hour;
	int minutes = (number%day%hour) / minute;
	int secs = (number%day%hour) % minute;

	std::cout << days << " " << hours << " " << minutes << " " << secs;







	return 0;
}
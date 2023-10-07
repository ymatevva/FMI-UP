#include<iostream>
#include<cassert>


int main()
{
	int day, month;
	std::cin >> day >> month;
	assert(day >= 1 && day <= 31);
	assert(month >= 1 && month <= 12);

	int newDay = day;
	int newMonth = month;
	switch (month)
	{
	case 1://January
	case 3://March
	case 5://May
	case 7://July
	case 8://August
	case 10://October
	case 12://December
	{
		if (day == 31)
		{
			newDay = 1;
			newMonth += 1;
		}
		else 
		{
			newDay += 1;
		}
		if (month == 12)
		{
			newMonth = 1;
		}
		
		break;
	}
	case 4:
	case 6:
	case 9:
	case 11:
	{
		if (day == 30)
		{
			newDay = 1;
			newMonth += 1;
		}
		else
		{
			newDay += 1;
		}
		
		break;
	}
	case 2:
	{
		if (day == 28)
		{
			newDay = 1;
			newMonth += 1;
		}
		else
		{
			newDay += 1;
		}

		
		break;
	}

	default:
		std::cout << "Invalid month";
		break;
	}

	std::cout << newDay << " " << newMonth << std::endl;









	return 0;
}
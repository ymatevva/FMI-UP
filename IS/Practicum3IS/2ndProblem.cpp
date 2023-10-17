#include<iostream>
#include<climits>

int main()
{
	int n;
	std::cin >> n;
	int biggest = INT_MIN;
	
	int number;
	for (size_t i = 0; i < n; i++)
	{
		std::cin >> number;
		if (number < 0)
		{
			if (number > biggest) {
				biggest = number;
			}
		}
	}

	std::cout << biggest;






	return 0;
}
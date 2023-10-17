#include<iostream>

int main()
{
	for (char i = 0; i < 127 ; i++)
	{
		if (i >= 65 && i <= 90) {
			if (i != 65 && i != 69 && i != 73 && i != 79 && i != 85)
			{
				std::cout << i << " ";
			}
		}
	}

















	return 0;
}
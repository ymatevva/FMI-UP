#include<iostream>

int main()
{

	int a, b;
	std::cin >> a >> b;
	
	for (size_t i = a; i <= b; i++)
	{   
		bool flag = true;
		if (i >= 2)
		{
			for (size_t j = 2; j < i; j++)
			{
				if (i % j == 0 )
				{
					flag = false;
				}
			}
		}
		if (flag && i >= 2)
		{
			std::cout << i << " ";
		}
		else
		{
			flag = true;
		}
	}





	return 0;
}
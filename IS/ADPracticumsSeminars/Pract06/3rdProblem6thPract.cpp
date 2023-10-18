#include<iostream>
const int MAX_SIZE = 50;
void removeElement(int array[MAX_SIZE], int& n, int index)
{
	int tempArr[MAX_SIZE] = {0};
	
	for (size_t i = 1,j = 1; i <= n; i++ )
	{ 
		if (index == i)
		{   
			continue;
		}
		else 
		{
			tempArr[j] = array[i];
			j++;
		}
	}

	n--;

	for (int i = 1; i <= n; i++)
	{
		array[i] = tempArr[i];
	}
}
int main()
{
	int n;
	std::cin >> n;

	int array[MAX_SIZE];
	for (size_t i = 1; i <= n; i++)
	{
		std::cin >> array[i];
	}

	int index;
	std::cin >> index;

	removeElement(array, n, index);

	for (size_t i = 1; i <= n; i++)
	{
		std::cout << array[i] << " ";
	}
	return 0;
}
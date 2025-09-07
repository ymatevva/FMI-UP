#include<iostream>
const int MAX_SIZE = 100;

void fillResult(int array[MAX_SIZE],int n, int result[MAX_SIZE], int a, int b,int& sizeRes)
{
	int j = 0;
	
	for (int i = 0; i < n; i++)
	{
		if (array[i] >= a && array[i] <= b)
		{
			result[j] = array[i];
			j++;
			sizeRes++;
		}
	}
}
int main()
{
	int n;
	std::cin >> n;

	int array[MAX_SIZE];
	for (size_t i = 0; i < n; i++)
	{
		std::cin >> array[i];
	}

	int result[MAX_SIZE] = {};

	int a, b;
	std::cin >> a >> b;

	int sizeRes = 0;
	fillResult(array, n, result,a,b,sizeRes);

	for (size_t i = 0; i < sizeRes; i++)
	{
		std::cout << result[i] << " ";
	}




	return 0;
}
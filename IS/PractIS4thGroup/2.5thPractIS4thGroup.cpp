#include<iostream>
#include<climits>

const int MAX_SIZE = 50;

void minMaxEl(int array[], int n, int& minEl, int& maxEl)
{
	 minEl = INT_MAX;
	 maxEl = INT_MIN;

	for (int i = 0; i < n; i++)
	{
		if (array[i] > maxEl)
			maxEl = array[i];
			

		if (array[i] < minEl)
			minEl = array[i];
	}
}


void switchPlaces(int array[], int n)
{
	int minEl = 0;
	int maxEl = 0;
	minMaxEl(array, n, minEl, maxEl);

	for (int i = 0; i < n; i++)
	{
		if (array[i] == minEl)
			array[i] = maxEl;
		
		else if (array[i] == maxEl)
			array[i] = minEl;
	}

}
int main()
{
	int n;
	std::cin >> n;

	int array[MAX_SIZE];

	for (int i = 0; i < n; i++)
	{
		std::cin >> array[i];
	}

	switchPlaces(array, n);

	for (int i = 0; i < n; i++)
	{
		std::cout << array[i] << " ";
	}

	return 0;
}
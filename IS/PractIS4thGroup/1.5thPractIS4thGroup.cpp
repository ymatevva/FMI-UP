#include<iostream>
#include<iomanip>
const int MAX_SIZE = 50;

void findMinMaxEl(int array[], int n, int& maxEl, int& minEl, int& minElIndex, int& maxElIndex)
{
	maxEl = INT_MIN;
	minEl = INT_MAX;

	for (int i = 0; i < n; i++)
	{
		if (minEl > array[i])
		{
			minEl = array[i];
			minElIndex = i;
		}

		if (maxEl < array[i])
		{
			maxEl = array[i];
			maxElIndex = i;
		}
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

	int maxEl= 0, minEl = 0;
	int maxElIndex= 0, minElIndex = 0;

	findMinMaxEl(array, n, maxEl, minEl, minElIndex, maxElIndex);

	std::cout << "The element " << maxEl << " is the maximum element on position " << maxElIndex << std :: endl;
	std::cout << "The element " << minEl << " is the minimum element on position " << minElIndex << std::endl;

	return 0;
}
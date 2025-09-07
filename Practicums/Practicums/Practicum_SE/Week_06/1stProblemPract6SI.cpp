#include<iostream>
#include<cmath>
#include<climits>
constexpr int MAX_SIZE = 1024;



void averageAndClosestToAverage(int array[], int n)
{
	double average = 0;

	for ( int i = 0; i < n; i++)
	{
		average += array[i];
	}

	average /= n;
	int closest = 0;
	int minDiff = INT_MAX;

	for (int i = 0; i < n; i++)
	{
		double diff = fabs(array[i] - average);

		if (diff < minDiff)
		{
			minDiff = diff;
			closest = array[i];
		}
	}

	std::cout << "Average of the elements: " << average << std::endl;
	std::cout << "The closest element to the average is: " << closest;

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

	averageAndClosestToAverage(array, n);

	return 0;
}
#include<iostream>
#include<cmath>
const int MAX_SIZE = 100;


double myFabs(double value, double epsilon)
{
		if (value < 0 && -value < epsilon) {
			return 0.0;
		}
		else if (value >= 0 && value < epsilon) {
			return 0.0;
		}
		return value;
}
void averageAndTarget(int arr[MAX_SIZE], int n)
{
	const double eps = 0.0001;
	//finding the average value
	double average = 0;
	for (int i = 0; i < n; i++)
	{
		average += arr[i];
	}
	average /= n;

	//target
	int diff = INT_MAX;
	int target = 0;
	for (size_t i = 0; i < n; i++)
	{
		if (myFabs(average-arr[i],eps) < diff)
		{
			target = arr[i];
			diff = myFabs(average - arr[i],eps);
		}
	}
	std::cout << average << " " << target;
}
int main()
{
	int n;
	std::cin >> n;

	int arr[MAX_SIZE];

	for (size_t i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	averageAndTarget(arr, n);





	return 0;
}
#include<iostream>
#include<climits>
const int MAX_SIZE = 60;

int smallestNumber(int arr[], int size)
{
	int smallest = INT_MAX;
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] < smallest)
		{
			smallest = arr[i];
		}
	}
	return smallest;
}
int greatestCommonDivisor(int arr[], int size)
{
	
	int GCD = INT_MIN;
	int smallest = smallestNumber(arr, size);
	for (size_t j = 1; j <= smallest; j++)
	{
		 bool dividesAll = true;
		
         for (size_t i = 0; i < size; i++)
       	 {
			 if (arr[i] % j != 0)
			 {
				 dividesAll = false;
				 break;
			 }
	     }

		 if (dividesAll)
		 {
			 if (j > GCD)
			 {
				 GCD = j;
			 }
		 }
		
	}
	return GCD;
}

int main()
{
	int n;
	std::cin >> n;

	int arr[MAX_SIZE];

	for (size_t i = 0; i < n ; i++)
	{
		std::cin >> arr[i];
	}

	int GCD = greatestCommonDivisor(arr, n);
	std::cout << GCD;




	return 0;
}
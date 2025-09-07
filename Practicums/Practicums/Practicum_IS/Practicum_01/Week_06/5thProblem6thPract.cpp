#include<iostream>
#include<climits>
const int MAX_SIZE = 50;

int lengthMaxSeq(int array[MAX_SIZE], int n)
{   
	 int currSeq = 1;
	 int maxSeq = 1;

	for (int i = 0; i < n-1; i++)
	{
		
		if (array[i] > array[i+1] )
		 {
			currSeq++;
		 
		}
		if (currSeq > maxSeq)
			{
				maxSeq = currSeq;
			}
		
		else if(array[i] < array[i+1])
		{
			
			currSeq = 1;
		}
	}
	return maxSeq;
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


	std::cout << lengthMaxSeq(array, n) << std::endl;
















	return 0;
}
#include<iostream>


void findLongestArithmeticProgression(const int arr[], size_t size, unsigned int& start, unsigned int& end)
{
	unsigned int longestArProgression = 1;
	unsigned int currSeqLength = 1;

	int firstEl = arr[0];
	int commonDiff = arr[1] - arr[0];
    unsigned int j = 0;
	
	for (size_t i = 1; i < size-1; i++)
	{
		
		if (arr[i] == firstEl +  ((i - j) * commonDiff))
			currSeqLength++;
	
		else
		{
			if (currSeqLength > longestArProgression)
			{
				longestArProgression = currSeqLength;
				end = i - 1;
				start = i - longestArProgression;
			}
			currSeqLength = 1;
			firstEl = arr[i];
			j = i;
		}

		commonDiff = arr[i + 1] - arr[i];
	}

}

void print(const int arr[], unsigned int startPos, unsigned int endPos)
{
	for (size_t i = startPos; i <= endPos ; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}
int main()
{
	constexpr int MAX_SIZE = 1024;

	unsigned int n;
	std::cin >> n;

	int arr[MAX_SIZE];
	for (size_t i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	unsigned int start = 0;
	unsigned int end = 0;
	findLongestArithmeticProgression(arr, n, start, end);
	print(arr, start, end);

	return 0;
}
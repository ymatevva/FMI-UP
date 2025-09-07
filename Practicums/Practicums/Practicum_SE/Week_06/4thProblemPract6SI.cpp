#include<iostream>
constexpr int MAX_SIZE = 1024;

int lengthLongestSeq(int array[], int n)
{
	int currSeq = 1;
	int longestSeq = 0;

	for (int i = 0; i < n; i++)
	{
		if (array[i] == array[i + 1])
			currSeq++;
		else
		{
			if (currSeq > longestSeq)
				longestSeq = currSeq;

			currSeq = 1;
		}
	}
	return longestSeq;
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

	std::cout << lengthLongestSeq(array, n);

	return 0;
}
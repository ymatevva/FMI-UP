#include<iostream>
const int MAX_SIZE = 100;

int countOccurences(int number, int arr[MAX_SIZE],int n)
{
	int count = 0;
	for (size_t i = 0; i < n; i++)
	{
		if (arr[i] == number)
		{
			count++;
		}
	}
	return count;
}
int firstMostOccured(int arr[MAX_SIZE], int n)
{
	int mostOccurences = countOccurences(arr[0], arr, n);
	int mostOccuredNum = arr[0];
	for (size_t i = 0; i < n; i++)
	{
		if (countOccurences(arr[i],arr,n) > mostOccurences)
		{
			mostOccuredNum = arr[i];
			mostOccurences = countOccurences(arr[i], arr, n);
		}
	}
	return mostOccuredNum;
}
int main()
{
	int n;
	std::cin >> n;
	int arr[MAX_SIZE];
	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}
	int mostOccuredNumber = firstMostOccured(arr, n);
	std::cout << mostOccuredNumber << std::endl;


	return 0;
}
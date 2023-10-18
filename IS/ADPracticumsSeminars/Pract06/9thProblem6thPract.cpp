#include<iostream>
const int MAX_SIZE = 100;

bool isContained(int element, int arr[MAX_SIZE], int n)
{
	
	for (size_t i = 0; i < n; i++)
	{
		if (arr[i] == element)
		{
			return true;
			break;
		}
	}
	return false;
}
void intersection(int arrN[MAX_SIZE], int arrM[MAX_SIZE], int M, int N, int result[MAX_SIZE])
{
	int j = 0;
	for (size_t i = 0; i < M; i++)
	{
		if (isContained(arrM[i],arrN,N))
		{
			result[j] = arrM[i];
			j++;
		}
	}
}
int countOccurences(int number, int arr[MAX_SIZE], int n)
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
void UNION(int arrN[MAX_SIZE], int arrM[MAX_SIZE], int M, int N,int& sizeRes, int result[MAX_SIZE])
{
	
	for (size_t i = 0; i < M; i++)
	{
			result[sizeRes] = arrM[i];
			sizeRes++;
	}
	for (size_t i = 0; i < N; i++)
	{
		if (!isContained(arrN[i],arrM,M))
		{
			result[sizeRes] = arrN[i];
			sizeRes++;
		}
	}
}

int main()
{
	int N;
	std::cin >> N;

	int arrN[MAX_SIZE];
	for (int i = 0; i < N; i++)
	{
		std::cin >> arrN[i];
	}

	int M;
	std::cin >> M;

	int arrM[MAX_SIZE];
	for (int i = 0; i < M; i++)
	{
		std::cin >> arrM[i];
	}

	int sizeRes = 0;
	int result[MAX_SIZE] = {};

	UNION(arrN, arrM, M, N, sizeRes, result);
	for (size_t i = 0; i < sizeRes; i++)
	{
		std::cout << result[i] << " ";
	}
	return 0;
}
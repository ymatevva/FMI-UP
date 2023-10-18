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

void UNION(int arrN[MAX_SIZE], int arrM[MAX_SIZE], int M, int N, int& sizeRes, int result[MAX_SIZE])
{

	for (size_t i = 0; i < M; i++)
	{
		result[sizeRes] = arrM[i];
		sizeRes++;
	}
	for (size_t i = 0; i < N; i++)
	{
		if (!isContained(arrN[i], arrM, M))
		{
			result[sizeRes] = arrN[i];
			sizeRes++;
		}
	}
}
void sortArray(int result[MAX_SIZE], int sizeRes)
{
	for (size_t i = 0; i < sizeRes; i++)
	{
		for (size_t j = i+1; j < sizeRes; j++)
		{
			if (result[i] > result[j])
			{
				int temp = result[i];
				result[i] = result[j];
				result[j] = temp;
			}
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
	sortArray(result, sizeRes);

	for (size_t i = 0; i < sizeRes; i++)
	{
		std::cout << result[i] << " ";
	}
}
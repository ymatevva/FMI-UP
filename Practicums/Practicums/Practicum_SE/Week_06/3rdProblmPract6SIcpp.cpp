#include<iostream>
constexpr int MAX_SIZE = 1024;

void reverseFirstN(int array[], int n, int N)
{
	int temp[MAX_SIZE];

	int j = 0;
	for (int i = N-1; i >= 0; i--)
	{
		temp[j++] = array[i];
	}

	for (int i = N; i < n; i++)
	{
		temp[j++] = array[i];
	}

	for (int i = 0; i < n; i++)
	{
		array[i] = temp[i];
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

	int N;
	std::cin >> N;


	reverseFirstN(array,n, N);

	for (int i = 0; i < n; i++)
	{
		std::cout << array[i] << " ";
	}
	return 0;
}
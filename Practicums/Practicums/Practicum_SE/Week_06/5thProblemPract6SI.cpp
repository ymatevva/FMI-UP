#include<iostream>
constexpr int MAX_SIZE = 1024;

int myAbs(int num)
{
	return num < 0 ? -num : num;
}
void newArr(int array[], int n)
{
	int temp[MAX_SIZE];

	int j = 0;
	for (int i = 0; i < n-1; i++)
	{
		temp[j++] = myAbs(array[i] - array[i + 1]);
	}

	for (int i = 0; i < j; i++)
	{
		std::cout << temp[i] << " ";
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

	newArr(array, n);

	return 0;
}
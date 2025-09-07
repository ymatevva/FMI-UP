#include <iostream>
using namespace std;
const int MAX_SIZE = 60;
void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void print(const int* arr, size_t size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}
void selectionSort(int* arr, size_t size)
{
	int i = 0, j = 0, minIndexEl = 0;

	for (int i = 0; i < size - 1; i++)
	{
		minIndexEl = i;

		for (size_t j = i + 1; j < size; j++)
		{
			if (arr[j] < arr[minIndexEl])
				minIndexEl = j;
		}
			swap(arr[minIndexEl], arr[i]);
	}
}

int main()
{
	int size;
	std::cin >> size;
	int arr[MAX_SIZE];
	for (size_t i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
	selectionSort(arr, size);
	print(arr, size);
}
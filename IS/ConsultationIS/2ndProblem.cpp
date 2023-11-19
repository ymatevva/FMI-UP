#include<iostream>
constexpr unsigned int MAX_SIZE = 1024+1;

void input(int arr[], int size)
{
	for (size_t i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
}

void mySwap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
bool valid(int arr[], int index, int size)
{
	return arr[index] < size && arr[index] >= 0;
}
int removeZeros(int arr[], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		while (size != 0 && arr[i] == 0) {
			mySwap(arr[i], arr[size - 1]);
			size--;
		}
	}
	return size;
}
void adjustElement(int arr[], int size, int index)
{
	while (valid(arr, index, size) && arr[index] != arr[arr[index] - 1] && arr[index] - 1 != index)
	{
		mySwap(arr[index], arr[arr[index] - 1]);
	}
}

int leastPositiveMissing(int arr[], int size) {
	input(arr, size);
	size = removeZeros(arr, size);

	for (int i = 0; i < size; i++) {
		adjustElement(arr, i, size);
	}

	for (int i = 0; i < size; i++) {
		if (arr[i] != i + 1) {
			return i + 1;
		}
	}
	return size + 1;
}

int main()
{
	unsigned int n = 0;
	std::cin >> n;

	int arr[MAX_SIZE] = { 0 };

	std::cout << leastPositiveMissing(arr, n);
	return 0;
}
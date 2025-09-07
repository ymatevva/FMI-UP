#include<iostream>

void printArr(const int* arr, size_t n);

int main() {

	unsigned int n;
	std::cin >> n;

	int* arr = new int[n];
	for (size_t i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	printArr(arr, n);

	delete[] arr;

}


void printArr(const int* arr, size_t n)
{
	for (size_t i = 0; i < n; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}
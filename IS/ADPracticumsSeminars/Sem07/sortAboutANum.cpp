#include<iostream>
constexpr int MAX_SIZE = 100;

void copyElements(int* dest, int* source, size_t length)
{
	for (size_t i = 0; i < length; i++)
		dest[i] = source[i];
	
}
void sortAboutElement( int* arr, unsigned int length, int el)
{
	int* temp = new int[length];
	unsigned int tempArr = 0;

	for (size_t i = 0; i < length; i++)
	{
		if (arr[i] < el)
			temp[tempArr++] = arr[i];
	}

	temp[tempArr++] = el;

	for (size_t i = 0; i < length; i++)
	{
		if (arr[i] > el)
			temp[tempArr++] = arr[i];
	}

	copyElements(arr, temp, length);
	delete[] temp;
}

void printArr(const int* arr, size_t length)
{
	for (size_t i = 0; i < length; i++)
		std::cout << arr[i] << " ";
	
	std::cout << std::endl;
}
void getInput(int* arr, unsigned int length)
{
	for (size_t i = 0; i < length; i++)
	{
		std::cin >> arr[i];
	}
}
int main()
{
	unsigned int n;
	std::cin >> n;

	int arr[MAX_SIZE];
	getInput(arr, n);

	int el;
	std::cin >> el;

	sortAboutElement(arr, n, el);
	printArr(arr, n);

	return 0;
}
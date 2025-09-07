#include<iostream>
constexpr int MAX_SIZE = 100;

void sortArray(int* arr, size_t length)
{
	if (!arr)
		return;

	for (int i = 1; i < length; i++)
	{
		int currentElement = arr[i];
		int currentIndex = i - 1;
		while (currentIndex >= 0 && arr[currentIndex] > currentElement)
		{
			arr[currentIndex + 1] = arr[currentIndex];
			currentIndex--;
		}
		arr[currentIndex + 1] = currentElement;
	}
}
int main()
{
	unsigned int n = 0;
	std::cin >> n;

	int arr[MAX_SIZE];
	for (size_t i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	sortArray(arr, n);
	for (size_t i = 0; i < n; i++)
	{
		std::cout << arr[i] << " ";
	}



	return 0;
}
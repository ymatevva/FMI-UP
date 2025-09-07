#include<iostream>
constexpr int MAX_SIZE = 100;

int* shiftByKPos(const int* arr, size_t length, int K)
{
	if (!arr)
		return nullptr;

	K %= length;
	int* newArr = new int[length];
	
	for (size_t i = 0; i < length; i++)
	{
		newArr[(i+K)%length] = arr[i];
	}
	
	return newArr;
	delete[] newArr;
}
void getInput(int* arr, size_t length)
{
	for (size_t i = 0; i < length; i++)
		std::cin >> arr[i];
}
void printOutput(const int* arr, size_t length)
{
	for (size_t i = 0; i < length; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}
int main()
{
	unsigned int n;
	std::cin >> n;


	int arr[MAX_SIZE];
	getInput(arr, n);

	int K;
	std::cin >> K;

	int* result = shiftByKPos(arr, n, K);
	printOutput(result, n);

	delete[] result;
	return 0;
}
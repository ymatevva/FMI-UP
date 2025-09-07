#include<iostream>
constexpr int MAX_SIZE = 1024;
void removeNumFromArray(int arr[MAX_SIZE], unsigned& length, int num)
{
	int tempArr[MAX_SIZE];
	int tempIndex = 0;

	unsigned int lengthArr = length;
	for (size_t i = 0; i < length; i++)
	{
		if (arr[i] == num)
		{
			lengthArr--;
			continue;
		}
		tempArr[tempIndex++] = arr[i];
	}

	for (size_t i = 0; i < lengthArr; i++)
		arr[i] = tempArr[i];
	
	length = lengthArr;
}
void printArray(const int arr[MAX_SIZE], size_t length)
{
	for (size_t i = 0; i < length; i++)
	{
		std::cout << arr[i] << " ";
	}
}
int main()
{
	
	int arr[MAX_SIZE];

	unsigned int n;
	std::cin >> n;

	for (size_t i = 0; i < n ; i++)
	{
		std::cin >> arr[i];
	}

	int num;
	std::cin >> num;


	removeNumFromArray(arr,n,num);
	printArray(arr, n);

	return 0;
}
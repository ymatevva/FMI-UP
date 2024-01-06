#include<iostream>
constexpr int MAX_SIZE = 100;

void shiftToTheRigth(int* arr, size_t n, int k)
{
	int temp[MAX_SIZE]{};

	for (int i = 0; i < k; ++i) 
		temp[i] = arr[n - k + i];
	
	for (int i = n - 1; i >= k; --i) 
		arr[i] = arr[i - k];

	for (int i = 0; i < k; ++i) 
		arr[i] = temp[i];
}


void shiftToTheLeft(int arr[], int n, int k) {
	k = k % n;

	int temp[MAX_SIZE]{};

	for (int i = 0; i < k; ++i) 
		temp[i] = arr[i];
	
	for (int i = 0; i < n - k; ++i) 
		arr[i] = arr[i + k];
	
	for (int i = n - k; i < n; ++i) 
		arr[i] = temp[i - (n - k)];
}

int main()
{
	int arr[MAX_SIZE];
	unsigned int length;
	std::cin >> length;

	for (size_t i = 0; i < length; i++)
		std::cin >> arr[i];

	int shiftValue;

	do
	{

		std::cin >> shiftValue;

		if (shiftValue != 0) 
		{
			if (shiftValue % 2 == 0)
				shiftToTheRigth(arr, length, shiftValue);
			
			else 
				shiftToTheLeft(arr, length, shiftValue);
			

			std::cout << "Array after shifting: ";

			for (int i = 0; i < length; ++i) 
				std::cout << arr[i] << " ";
			
			std::cout << std::endl;
		}
	} while (shiftValue != 0);



	return 0;
}
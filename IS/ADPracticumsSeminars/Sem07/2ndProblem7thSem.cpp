#include<iostream>

int linearSearchWithPtrs(const int* arr, size_t size, int element)
{
	int i = 0;
	while (*arr != '\0')
	{
		if (*arr == element)
		{
			return i;
		}
		i++;
		arr++;
	}
	return -1;//if it wasnt found
}
int main()
{
	int arr[] = { 1 ,6,5, 7 };

	std::cout << linearSearchWithPtrs(arr, 4, 6);


	return 0;
}
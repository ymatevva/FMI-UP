#include<iostream>
constexpr int MAX_SIZE = 1024;

int countOcc(int arr[], int n, int element)
{
	int count = 0;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] == element)
			count++;
	}

	return count;
}
bool isPerm(int arr1[], int n1, int arr2[], int n2)
{
	if (n1 != n2)
		return false;

	for (int i = 0; i < n1; i++)
	{
		if (countOcc(arr1, n1, arr1[i]) != countOcc(arr2, n2, arr1[i]))
			return false;
	}
	return true;
}
int main()
{
	int n1;
	std::cin >> n1;

	int arr1[MAX_SIZE];

	for (int i = 0; i < n1; i++)
	{
		std::cin >> arr1[i];
	}

	int n2;
	std::cin >> n2;

	int arr2[MAX_SIZE];

	for (int i = 0; i < n2; i++)
	{
		std::cin >> arr2[i];
	}

	std::cout << std::boolalpha << isPerm(arr1, n1, arr2, n2);

	return 0;
}
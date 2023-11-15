#include<iostream>
constexpr int MAX_SIZE = 1024;

bool compareFromPos(int arr1[], int arr2[], int n2, int pos)
{
	for (int i = pos, j = 0; i < pos+n2; i++,j++)
	{
		if (arr1[i] != arr2[j])
			return false;
	}
	return true;
}
bool isASubSeq(int arr1[], int n1, int arr2[], int n2)
{
	int j = 0;
	for (int i = 0; i < n1; i++)
	{
		if (arr1[i] == arr2[j] && compareFromPos(arr1, arr2, n2, i))
			return true;
	}
	return false;
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

	std::cout << std::boolalpha << isASubSeq(arr1, n1, arr2, n2);
	return 0;
}
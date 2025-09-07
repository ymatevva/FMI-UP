#include<iostream>

bool canItBeFormed(int array1[], int size1, int array2[], int size2)
{
	int j = 0;

	for (int i = 0; i < size1; i++)
	{
		if (array1[i] == array2[j]) 
			j++;
		
		else
			i++;
	}

	return (j == size2);
}
int main()
{
	constexpr int MAX_SIZE = 1024;

	int size1;
	std ::cin >> size1;
	
	int array1[MAX_SIZE];

	for (int i = 0; i < size1; i++)
	{
		std::cin >> array1[i];
	}

	int size2;
	std::cin >> size2;

	int array2[MAX_SIZE];

	for (int i = 0; i < size2; i++)
	{
		std::cin >> array2[i];
	}

	std::cout << std :: boolalpha << canItBeFormed(array1, size1, array2, size2);

	return 0;
}
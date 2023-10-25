#include<iostream>
const int MAX_SIZE = 60;
void swap(int&a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
void sortInFirst(int array1[], int array2[], int& n1, int& n2)
{
	int start = n1 ;
    n1 = start + n2;//the number of elements in the second array
	for (size_t i = start, j = 0; i < n1; i++,j++)
	{
		array1[i] = array2[j];
	}

	for (size_t i = 0; i < n1; i++)
	{
		for (size_t j = i+1; j < n1 ; j++)
		{
			if (array1[i] > array1[j])
				swap(array1[i], array1[j]);
		}
	}

}
int main()
{   
	int n1;
	std::cin >> n1;
	int array1[MAX_SIZE];
	for (size_t i = 0; i < n1;i++)
	{
		std::cin >> array1[i];
	}


	int n2;
	std::cin >> n2;
	int array2[MAX_SIZE];
	for (size_t i = 0; i < n2; i++)
	{
		std::cin >> array2[i];
   	}

	sortInFirst(array1, array2, n1, n2);
	for (size_t i = 0; i < n1 ; i++)
	{
		std::cout << array1[i] << " ";
	}



	return 0;
}
#include<iostream>
const int MAX_SIZE = 50;
int countOccurence(char* array, char element)
{
	int count = 0;
	for (size_t i = 0; array[i] != '\0'; i++)
	{
		if (array[i] == element)
			count++;
	}
	return count;
}
int countDigits(int number)
{
	int count = 0;
	while (number != 0)
	{
		count++;
		number /= 10;
	}
	return count;
}

void maskElement(char*& array,  int element)
{
  for (size_t i = 0; array[i] != '\0';i++)
  {
	  if (array[i] == element)
		  array[i] = 'a';
  }
}

int calculateSize(char* array)
{
	int count = 0;

	for (size_t i = 0; array[i] != '\0'; i++)
	{
		count += (3 + countDigits(countOccurence(array, i)));

	}
	count -= 1;
	return count;
}
int reverse(int number)
{
	int res = 0;
	while (number != 0)
	{
		res = res * 10 + number % 10;
		number /= 10;
	}
	return res;
}
char* newArr(char* array)
{

	int size = calculateSize(array);

	char* newArray = new char[size+2];
	int newIndex = 0;

	for (size_t i = 0; array[i]!='\0'; i++)
	{
		if (array[i] != 'a')
		{
			int occurences = reverse(countOccurence(array, array[i]));

			while (occurences > 0)
			{
				newArray[newIndex++] = occurences % 10 + '0';
				occurences /= 10;
			}
		
			newArray[newIndex++] = 'x';
			newArray[newIndex++] = array[i] ;

			if (array[i + 1] != '\0' && array[i + 1] != 'a')
				newArray[newIndex++] = ',';

			maskElement(array,array[i]);
		}
	}
	newArray[newIndex] = '\0';

	return newArray;
	delete[] newArray;
}
int main()
{
	
	char array[MAX_SIZE];
	std::cin.getline(array, MAX_SIZE);

	char* result = newArr(array);
	std::cout << result;

	delete[] result;
	return 0;
}
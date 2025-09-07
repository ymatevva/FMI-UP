#include<iostream>
constexpr int MAX_SIZE = 100;


int* rotateToTheLeft( int* arr, size_t length, unsigned int K)
{
	if (!arr)
		return nullptr;

	int* res = new int[length];
	unsigned int newInd = 0;

	int* temp = new int[K];

	for (size_t i = 0; i < K; i++)
		temp[i] = arr[i];

    for (size_t i = 0; i < length - K; i++)
		res[i] = arr[i+K];

	for (size_t i = 0; i < K; i++)
		res[length - K + i] = temp[i];

	return res;
	delete[] temp;
}

int* rotateToTheRigth(const int* arr, size_t length, unsigned int K)
{
	if (!arr)
		return nullptr;

	int* res = new int[length];
	unsigned int newInd = 0;

	int* temp = new int[K];

	for (size_t i = 0; i < K; i++)
		temp[i] = arr[length - K + i];


	for (int i = length - 1; i >= K; i--)
		res[i] = arr[i - K];

	for (size_t i = 0; i < K; i++)
		res[i] = temp[i];

	return res;
	delete[] temp;
}


int myStrCmp(const char* str1, const char* str2)
{
	if (!str1 || !str2)
		return -9;

	while (*str1 && *str1 == *str2)
	{
		str1++;
		str2++;
	}

	return(*str1 - *str2);
}

int main()
{
	unsigned int n;
	std::cin >> n;

	int arr[MAX_SIZE];
	for (size_t i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	unsigned int K;
	std::cin >> K;

	char toTheRigth[] =  "rigth" ;
	char toTheLeft[] =  "left" ;

	char direction[MAX_SIZE];
	std::cin.ignore();
	std::cin.getline(direction, MAX_SIZE);

	int* res = nullptr;

	if (myStrCmp(direction, toTheLeft) == 0)
		res = rotateToTheLeft(arr, n, K);

	else if(myStrCmp(direction, toTheRigth) == 0)
		res = rotateToTheRigth(arr, n, K);

	for (size_t i = 0; i < n; i++)
		std::cout << res[i] << " ";
	

	delete[] res;
	return 0;
}
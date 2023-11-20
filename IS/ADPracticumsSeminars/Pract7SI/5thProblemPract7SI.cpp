#include<iostream>

int fromCharToIndex(char ch)
{
	if (ch >= '0' && ch <= '9')
		return ch - '0';
	else if (ch >= 'A' && ch <= 'Z')
		return ch - 'A' + 10;
	else
		return -1;
}

unsigned int fromRandomToDecimal(const char from[], size_t size, unsigned int numeric)
{
	unsigned int res = 0;
	for (int i = size - 1, mult = 1; i >= 0; i--, mult *= numeric)
	{
		res += fromCharToIndex(from[i]) * mult;
	}
	return res;
}

bool areEqualDecimals(unsigned int a, unsigned int b)
{
	return a == b;
}

bool areEqual(const char first[], size_t firstSize, const char second[], size_t secondSize, unsigned int N, unsigned int K)
{
	int decFirst = fromRandomToDecimal(first, firstSize, N);
	int decSecond = fromRandomToDecimal(second, secondSize, K);

	return areEqualDecimals(decFirst, decSecond);
}
int main()
{
	constexpr int MAX_SIZE = 5;

	char first[MAX_SIZE] = {'3','4','5'};
	char second[MAX_SIZE] = {'E', '5'};

	unsigned int sizeFirst;
	std::cin >> sizeFirst;

	unsigned int sizeSecond;
	std::cin >> sizeSecond;

	unsigned int N;
	std::cin >> N;

	unsigned int K;
	std::cin >> K;


	std :: cout << std :: boolalpha << areEqual(first, sizeFirst, second, sizeSecond, N, K);

	return 0;
}
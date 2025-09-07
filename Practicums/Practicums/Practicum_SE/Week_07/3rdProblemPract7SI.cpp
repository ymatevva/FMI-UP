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

char fromIndexToChar(int index)
{
	if (index >= 0 && index <= 9)
		return index + '0';
	else if (index >= 10)
		return index - 10 + 'A';
	else
		return 0;
}

unsigned int fromRandomToDecimal(const char from[], size_t fromSize, unsigned int K)
{
	unsigned int res = 0;
	for (int i = fromSize - 1,mult = 1; i >= 0 ; i--,mult*=K)
	{
		res += fromCharToIndex(from[i]) * mult;
	}
	return res;
}

unsigned int sumTwoDecimals(const char first[], const char second[], size_t size, unsigned int K)
{
	int a = fromRandomToDecimal(first, size, K);
	int b = fromRandomToDecimal(second, size, K);
	return a + b;
}

void fromDecimalToRandom(unsigned int decimal, char to[], size_t toSize, unsigned int K)
{
	for (int i = toSize-1; i >= 0 ; i--)
	{
		int index = decimal % K;
		char symbol = fromIndexToChar(index);
		to[i] = symbol;
		decimal /= K;
	}
}

void print(const char arr[], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
}


void sumTwoArrays(const char first[], size_t size, const char second[], char to[], size_t toSize, unsigned int K)
{
	unsigned int decimal = sumTwoDecimals(first, second, size,K);
	fromDecimalToRandom(decimal, to, toSize, K);
}
int main()
{
	constexpr int MAX_SIZE = 3;

	char first[MAX_SIZE] = { '1','7','5' };
	char second[MAX_SIZE] = { '5','3','7' };

	unsigned int K;
	std::cin >> K;

	char res[MAX_SIZE];

	sumTwoArrays(first, MAX_SIZE, second, res, MAX_SIZE, K);
	print(res, MAX_SIZE);
	return 0;
}
#include<iostream>

unsigned int fromSymbolToIndex(char ch)
{
	if (ch >= '0' && ch <= '9')
		return ch - '0';
	else if (ch >= 'A' && ch <= 'Z')
		return ch - 'A' + 10;
	else
		return -1;
}

char fromIndexToSymbol(unsigned int ind)
{
	if (ind >= 0 && ind <= 9)
		return ind + '0';
	else if (ind >= 10)
		return ind + 'A' - 10;
	else
		return 0;
}

unsigned int fromRandomToDecimal(const char from[], size_t fromSize, unsigned int k)
{
	int result = 0;
	for (int i = fromSize - 1, mult = 1; i >= 0; i--, mult *= k)
	{
		result += fromSymbolToIndex(from[i]) * mult;
	}
	return result;
}

void fromDecimalToRandom(unsigned int n, char to[], size_t toSize, unsigned int k)
{
	for (int i = toSize - 1; i >= 0; i--)
	{
		int ind = n % k;
		char symbol = fromIndexToSymbol(ind);
		to[i] = symbol;
		n /= k;
	}
}

void print(const char arr[], size_t size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
}
void fromRandomToRandom(const char from[], size_t fromSize, unsigned int n, char to[], size_t toSize, unsigned int k)
{
	int decimal = fromRandomToDecimal(from, fromSize, n);
	fromDecimalToRandom(decimal, to, toSize, k);
}

int main()
{
	constexpr int SIZE = 5;
	 char from[SIZE] = { '0','0','A','B','3' };

	char to[SIZE];

	fromRandomToRandom(from, SIZE, 16, to, SIZE, 10);
	print(to, SIZE);

}
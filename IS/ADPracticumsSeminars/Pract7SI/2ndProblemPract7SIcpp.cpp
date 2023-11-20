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

char fromIndexToChar(int idx)
{
	if (idx >= 0 && idx <= 9)
		return idx + '0';
	else if (idx >= 10)
		return idx + 'A' - 10;
	else
		return 0;
}

unsigned int fromRandomToDecimal(const char from[], size_t fromSize, unsigned int numeric)
{
	unsigned int res = 0;
	for (int i = fromSize - 1, mult = 1; i >= 0; i--, mult *= numeric)
	{
		res += fromCharToIndex(from[i]) * mult;
	}
	return res;
}

unsigned int decreaseDecimal(unsigned int& decimal)
{
	return decimal -= 1;
}

void fromDecimalToRandom(unsigned int decimal, char to[], size_t toSize, unsigned int numeric)
{
	for (int i = toSize - 1; i >= 0; i--)
	{
		int index = decimal % numeric;
		char symb = fromIndexToChar(index);
		to[i] = symb;
		decimal /= numeric;
	}
}

void print(const char arr[], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
}
void decreaseWithOne(const char from[], size_t fromSize, char to[], size_t toSize, unsigned int numeric)
{
	unsigned int decimal = fromRandomToDecimal(from, fromSize, numeric);
	decreaseDecimal(decimal);
	fromDecimalToRandom(decimal, to, toSize, numeric);
}
int main()
{
	constexpr int MAX_SIZE = 3;

	char from[MAX_SIZE] = { '1','0','0' };
	char to[MAX_SIZE];

	unsigned int numeric;
	std::cin >> numeric;

	decreaseWithOne(from, MAX_SIZE, to, MAX_SIZE, numeric);
	print(to, MAX_SIZE);
	return 0;
}
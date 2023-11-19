#include<iostream>
constexpr int MAX_SIZE = 1024;

bool isValidInput(unsigned int start, unsigned int end)
{
	return start < MAX_SIZE && end < MAX_SIZE && start <= end;
}

void mark(unsigned int occurances[], unsigned int start, unsigned int end)
{
	for (size_t i = start; i <= end ; i++)
	{
		occurances[i]++;
	}
}
void printSolution(unsigned int occurances[])
{
	for (size_t i = 0; i < MAX_SIZE; i++)
	{
		if (occurances[i] != 0)
			std::cout << i << ": " << occurances[i] << std::endl;
	}
}
void getInput(unsigned int& start, unsigned int& end)
{
	bool failedInput = false;
	do
	{
		if (failedInput)
			std::cout << "Invalid input" << std::endl;

		std::cin >> start >> end;
		failedInput = true;
	} while (!isValidInput(start, end));
}
void solve(unsigned int n)
{
	unsigned int start = 0;
	unsigned int end = 0;
	
	unsigned int occurances[MAX_SIZE] = { 0 };

	for (size_t i = 0; i < n; i++)
	{
		getInput(start, end);
		mark(occurances, start, end);
	}
	printSolution(occurances);
}
int main()
{
	unsigned int n;
	std::cin >> n;

	solve(n);

	return 0;
}
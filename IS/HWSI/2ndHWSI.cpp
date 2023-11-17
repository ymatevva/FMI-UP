#include<iostream>
constexpr int MAX_SIZE = 1000;

int minimumPeople(const int people[], size_t n)
{
	unsigned int countPeople = 1;
	unsigned int count = people[0]+1;

	for (size_t i = 1; i < n; i++)
	{
		if (people[i] == people[i - 1])
		{
				if (countPeople > people[i])
				count++;
		}
			

		else
				count += people[i] + 1;


		countPeople++;
	}
	return count;
}
int main()
{
	int n;
	std::cin >> n;

	int people[MAX_SIZE];

	for (size_t i = 0; i < n; i++)
	{
		std::cin >> people[i];
	}

	std::cout << minimumPeople(people, n);

}
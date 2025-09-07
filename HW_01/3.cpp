#include<iostream>
constexpr unsigned int MAX_SIZE = 1000;

unsigned int countDigitOcc(unsigned int number, unsigned int digit)
{
	unsigned int count = 0;
	while (number != 0)
	{
		unsigned int lastD = number % 10;

		if (lastD == digit)
			count++;

		number /= 10;
	}
	return count;
}
bool isWithDiffDigits(unsigned int number)
{
	while (number != 0)
	{
		unsigned int lastD = number % 10;

		if (countDigitOcc(number, lastD) > 1)
			return false;

		number /= 10;
	}
	return true;
}
unsigned int countDigits(unsigned int number)
{
	unsigned int count = 0;
	while (number != 0)
	{
		count++;
		number /= 10;
	}
	return count;
}
bool validInput(unsigned int digitsNeeded, unsigned requests)
{
	return (digitsNeeded >= 1 && digitsNeeded <= 6) && requests <= MAX_SIZE;
}
bool isValidInputBullsAndCows(unsigned int bullOrCow, unsigned int requestDigits)
{
	return bullOrCow <= requestDigits;
}
bool isValidInputNumber(unsigned int number, unsigned int digitsNeeded)
{
	return (isWithDiffDigits(number)) && (countDigits(number) == digitsNeeded);
}

unsigned int myPow(unsigned int base, unsigned int exponent)
{
	unsigned int result = 1;
	for (int i = 1; i <= exponent; i++)
	{
		result *= base;
	}
	return result;
}

bool isElementInArray(unsigned int element, unsigned int array[], unsigned int size)
{
	for (size_t i = 0; i < size; i++)
	{
		if (array[i] == element )
			return true;
	}
	return false;
}
bool hasTheSameBullsAndCows(unsigned int digitsNeeded, unsigned int requestNum, unsigned int requestBulls, unsigned int requestCows, unsigned int myGuessNum)
{
	unsigned int request[6];
	unsigned int guess[6];


	unsigned int start = digitsNeeded - 1;

	for (int i = start; i >= 0; i--)
	{
		request[i] = requestNum % 10;
		requestNum /= 10;

		guess[i] = myGuessNum % 10;
		myGuessNum /= 10;
	}

	unsigned int guessBulls = 0, guessCows = 0;

	for (size_t i = 0; i < start + 1; i++)
	{
		if (request[i] == guess[i])
			guessBulls++;
		else
		{
			if (isElementInArray(guess[i], request, 6))
				guessCows++;
		}
	}

	return (guessCows == requestCows) && (guessBulls == requestBulls);
}

bool validateForAllRequests(unsigned int digitsNeeded, unsigned int requests, unsigned int myGuessNum, unsigned int requestNum[], unsigned int requestBulls[], unsigned int requestCows[])
{
	if (!isWithDiffDigits(myGuessNum))
		return false;

	for (int i = 0; i < requests; i++)
	{
		if (!hasTheSameBullsAndCows(digitsNeeded, requestNum[i], requestBulls[i], requestCows[i], myGuessNum))
			return false;
	}
	return true;
}
void generateNumbers(unsigned int requests, unsigned int digitsNeeded, unsigned int requestNum[], unsigned int requestBulls[], unsigned int requestCows[])
{
	unsigned int limit = myPow(10, digitsNeeded);

	for (size_t myGuess = 0; myGuess < limit; myGuess++)
	{

		if (validateForAllRequests(digitsNeeded, requests, myGuess, requestNum, requestBulls, requestCows))
		{

			unsigned int addZeros = digitsNeeded - countDigits(myGuess);

			for (size_t i = 1; i <= addZeros; i++)
			{
				std::cout << "0";
			}
			std::cout << myGuess << " ";
		}
	}

}

unsigned userInputNumber(unsigned int digitsNeeded)
{
	unsigned int number;
	do
	{
		std::cin >> number;
	} while (!isValidInputNumber(number, digitsNeeded));
	return number;

}
unsigned userInputBulls(unsigned int digitsNeeded)
{
	unsigned int bull;
	do
	{
		std::cin >> bull;
	} while (!isValidInputBullsAndCows(bull, digitsNeeded));
	return bull;

}
unsigned userInputCows(unsigned int digitsNeeded)
{
	unsigned int cow;
	do
	{
		std::cin >> cow;
	} while (!isValidInputBullsAndCows(cow, digitsNeeded));
	return cow;

}
void getUserInput(unsigned int requests, unsigned int digitsNeeded, unsigned int requestNum[], unsigned int requestBulls[], unsigned int requestCows[])
{
	for (int i = 0; i < requests; i++)
	{
		requestNum[i] = userInputNumber(digitsNeeded);
		requestBulls[i] = userInputBulls(digitsNeeded);
		requestCows[i] = userInputCows(digitsNeeded);
	}
}
int main()
{

	unsigned int digitsNeeded = 0;
	unsigned int requests = 0;

	std::cin >> digitsNeeded >> requests;

	while (!validInput(digitsNeeded, requests))
	{
		std::cout << "Invalid input for the number of digits. Try again: ";
		std::cin >> digitsNeeded >> requests;
	}

	unsigned int requestNum[MAX_SIZE], requestBulls[MAX_SIZE], requestCows[MAX_SIZE];

	getUserInput(requests, digitsNeeded, requestNum, requestBulls, requestCows);
	generateNumbers(requests, digitsNeeded, requestNum, requestBulls, requestCows);


	return 0;
}
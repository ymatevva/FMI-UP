#include<iostream>
void shortenFractions(int& numerator, int& denominator)
{
	int i = 1;
	while (numerator % i == 0 && denominator % i == 0)
	{
		numerator /= i;
		denominator /= i;
		i++;
	}
}
void sumTwoFractions(int numerator1, int denominator1, int numerator2, int denominator2)
{
	int biggerDenominator = (denominator1 < denominator2) ? denominator2 : denominator1;
	int smallerDenominator = (denominator1 < denominator2) ? denominator1 : denominator2;

	int makeThemCompatible = 0;

	if (biggerDenominator % smallerDenominator == 0)
	{
		makeThemCompatible += (biggerDenominator / smallerDenominator);

	  if (biggerDenominator == denominator1)
	 {
		  numerator2 *= makeThemCompatible;
		denominator2 *= makeThemCompatible;
	 }
	  else 
	 {
		  numerator1 *= makeThemCompatible;
		denominator1 *= makeThemCompatible;
	 }

    }

	else
	{
		int copyDenom1 = denominator1;
		int copyDenom2 = denominator2;

		numerator1 *= copyDenom2;
		denominator1 *= copyDenom2;
		numerator2 *= copyDenom1;
		denominator2 *= copyDenom1;

	}
		
	int numeratorRes = numerator1 + numerator2;
	int denominatorRes = denominator1;

	shortenFractions(numeratorRes, denominatorRes);
	std::cout << numeratorRes << " " << denominatorRes << std::endl;
}
int main()
{
	int numerator1, denominator1, numerator2, denominator2;
	std::cin >> numerator1 >> denominator1 >> numerator2 >> denominator2;

	sumTwoFractions(numerator1, denominator1, numerator2, denominator2);
	

	return 0;
}
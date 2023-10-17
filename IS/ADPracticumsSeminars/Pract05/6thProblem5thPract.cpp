#include<iostream>

int reverse(int number)
{
	int rev = 0;
	while (number != 0)
	{
		rev = rev * 10 + number%10;
		number /= 10;
	}
	return rev;
}
void swap(int&a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
int countDigits(int num)
{
	int count = 0;
	while (num != 0)
	{
		count++;
		num /= 10;
	}
	return count;
}
void swapK(int& n, int&m, int k)
{
	int count = 1;
	int copyN = n;
	int copyM = m;

    int maxNum = (n > m) ? n : m;
	
    n = 0;
    m = 0;
   int revN = reverse(copyN);
   int revM = reverse(copyM);

	while (countDigits(maxNum) >= count)
	{  
		int lastDigitN = revN % 10;
	    int lastDigitM = revM % 10;
		
		if (count == k)
		{
			n = n * 10 + lastDigitM;
		    m = m * 10 + lastDigitN;
		}

		if (revN!= 0  && revM != 0 && count!= k)
		{
          n = n * 10 + lastDigitN;
		  m = m * 10 + lastDigitM;
		
		}

		else if (revN != 0 && revM == 0 && count != k)
		{
			n = n * 10 + lastDigitN;
		}
		else if (revM != 0 && revN == 0 && count != k)
		{
			m = m * 10 + lastDigitM;
		}	

		revM /= 10;
		revN /= 10;
		count++;
	}
}
int main()
{
	int n = 0, m = 0, k = 0;
	std::cin >> n >> m >> k;

	swapK(n, m, k);
	std::cout << n << " " << m;
	










	return 0;
}
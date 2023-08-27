#include <iostream>


bool isAdj(int number)
{

    while(number > 1)
    {
        int prevDigit = number %10;
        int currDigit = (number/=10)%10;
        if (currDigit == prevDigit )
        {
            return false;
        }
        number/=10;
    }
    return true;
}
bool isThereAdj(int min, int max)
{
    for (int i = min; i <= max; ++i) {
        if (isAdj(i))
        {
            return true;
        }
    }
    return false;
}
int minAdj(int min, int max)
{
    int minAdj = INT_MAX;
    for (int i = min; i <= max ; ++i)
    {
        if (isAdj(i) && i < minAdj)
        {
            minAdj = i;
        }
    }
    return minAdj;
}
int maxAdj(int min, int max)
{
    int maxAdj = INT_MIN;
    for (int i = min; i <= max ; ++i)
    {
        if (isAdj(i) && i > maxAdj)
        {
            maxAdj = i;
        }
    }
    return maxAdj;
}
int main()
{
  int a, b;
  std :: cin >> a >> b;


    if (isThereAdj(a,b))
    {
        std :: cout << "The difference is: " << maxAdj(a,b) - minAdj(a,b) << std :: endl;
    }
    else
    {
        std :: cout << "There are no adjacent numbers" << std :: endl;
    }

    return 0;
}
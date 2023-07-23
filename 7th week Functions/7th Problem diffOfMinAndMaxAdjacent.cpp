#include<iostream>
#include<cassert>
//checking if a number is adjacent and the difference between the smallest and the biggest adjacent nums in the interval

bool isAdjacent(int number)
{
    int currDigit;
    int previousDigit;
    while(number > 0)
    {
        currDigit = number%10;
        previousDigit = (number/10)%10;

        if (currDigit == previousDigit)
        {
            return false;
        }
        number/=10;
    }
    return true;
}
int minAdjacent(int num1, int num2 )
{
    int minAdj = INT_MAX;
    for (int i = num1; i <= num2 ; i++)
    {
        if (isAdjacent(i))
        {
            if (i < minAdj)
                minAdj = i;
        }
    }
    return minAdj;
}
int maxAdjacent(int num1, int num2 )
{
    int maxAdj = INT_MIN;
    for (int i = num1; i <= num2 ; i++)
    {
        if (isAdjacent(i))
        {
            if (i > maxAdj)
                maxAdj = i;
        }
    }
    return maxAdj;
}
int differenceBetweenMaxAndMinAdjacent(int min, int max)
{
    int minAdj = minAdjacent(min,max);
    int maxAdj = maxAdjacent(min,max);

    if (minAdj == INT_MAX && maxAdj == INT_MIN)
        return -1;// no adjacent nums in the interval

        return maxAdj - minAdj;
}

int main()
{
    assert(isAdjacent(2572) == true);
    assert(isAdjacent(3119) == false);

    assert(differenceBetweenMaxAndMinAdjacent(9, 100) == 89);
    assert(differenceBetweenMaxAndMinAdjacent(1099, 1222) == 18);
    assert(differenceBetweenMaxAndMinAdjacent(110, 115) < 0);
    int diff = differenceBetweenMaxAndMinAdjacent(9, 100);
    if (diff < 0)
    {
        std::cout << diff << std::endl;
    }
    else
    {
        std::cout << "No adjacent numbers!";
    }
  return 0;
}
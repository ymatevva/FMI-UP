#include<iostream>
#include <cmath>
#include<iomanip>
const int MAX_SIZE = 30;

int myAbs(int num)
{
    if (num<0)
    {
        return num*-1;
    }
    else
    return num;
}
int main()
{
   int size1;
   std :: cin >> size1;

   int car1[MAX_SIZE][MAX_SIZE];

    for (int i = 0; i < size1; ++i) //coordinates
    {
        for (int j = 0; j < 2 ; ++j)
        {
            std :: cin >> car1[i][j];
        }
    }

    int size2;
   std :: cin >> size2;

    int car2[MAX_SIZE][MAX_SIZE];

    for (int i = 0; i < size2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
           std :: cin >> car2[i][j];
        }
    }

    int dist1 = 0;

    for (int i = 0; i < size1; i++)
    {
        if (i+1 < size1)
        {
            dist1 += sqrt(
            pow(myAbs(car1[i][0] - car1[i + 1][0]), 2) +
               pow(myAbs(car1[i][1] - car1[i + 1][1]), 2));

        }
    }


    int dist2 = 0;

    for (int i = 0; i < size2; i ++)
    {
        if (i+1 < size2)
        {
            dist2 += sqrt(
                    pow(myAbs(car2[i][0] - car2[i+1][0]),2)+
                    pow(myAbs(car2[i][1] - car2[i+1][1]),2)
                    );
        }

    }


    if (dist1 == dist2)
    {
        std :: cout << std :: setprecision(2) << std :: fixed << (double)dist1;
    }
    else
    {
        std :: cout << dist1 << " " << dist2;
    }


    return 0;
}
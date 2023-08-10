#include<iostream>
#include<cstring>
#include <iomanip>
#include<cmath>
const int MAX_SIZE = 100;

void positionDistanced(char str[])
{
    int length = strlen(str);
    int maxDistance = INT_MIN;

    int distance = 0;
    int rightIndex;
    int leftIndex;

    for (int i = 0; i < length; ++i)
    {
        for (int j = 0; j < length - 1 ; ++j) {

            if (str[i] == str[j])
            {
                distance = abs(j-i);
                if (distance > maxDistance) {
                    maxDistance = distance;
                    leftIndex = i;
                    rightIndex = j;
                }
            }
        }
    }
    std :: cout << leftIndex << " " << rightIndex << std :: endl;
}



int main()
{
     char str[MAX_SIZE];
     std::cin.getline(str,MAX_SIZE);
     positionDistanced(str);


    return 0;
}
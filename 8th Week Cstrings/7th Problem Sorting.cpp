#include<iostream>
#include<cstring>
#include<algorithm>
const int MAX_SIZE = 1024;

int main()
{
    char alpha[MAX_SIZE];//alphabetical symbol
    char other[MAX_SIZE];
    int indexAlpha = 0;
    int otherIndex = 0;
    char c;

    while(std::cin.get(c))
    {

        if (c =='\n')
        {
            break;
        }
        if (isalpha(c))
        {
            alpha[indexAlpha] = c;
            indexAlpha++;
        }
        else
        {
            other[otherIndex] = c;
            otherIndex++;
        }
    }

    alpha[indexAlpha]='\0';
    other[otherIndex] = '\0';

    std::sort(alpha, alpha + indexAlpha);//sort it from start to end
    std::sort(other, other + otherIndex);
    std::cout << strcat(alpha, other) << std::endl;
    //The reason for separating alphabetic and non-alphabetic characters into different arrays is to sort them separately.
    // Since alphabetic and non-alphabetic characters have different ranges of ASCII values,
    // sorting them together would not give the desired lexicographic order


    return 0;
}
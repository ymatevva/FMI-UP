#include<iostream>
#include<cstring>
const int MAX_SIZE = 100;

int main() {
    char num1[MAX_SIZE];
    std::cin.getline(num1, MAX_SIZE);

    char num2[MAX_SIZE];
    std::cin.getline(num2, MAX_SIZE);

    int length1 = strlen(num1);
    int length2 = strlen(num2);

    int number1 = 0;
    int number2 = 0;

    bool negative = (num1[0] == '-' || num2[0] == '-');

    int startIndex1 = (num1[0] == '-')?1:0;

    for (int i = startIndex1; i < length1; ++i)
    {
        number1 += number1 * 10 + (int) num1[i];
    }

    if (startIndex1 == 1)
    {
        number1 = number1*-1;
    }


    int startIndex2 = (num2[0] == '-')?1:0;
    for (int i = startIndex2; i < length2; ++i)
    {
        number2 += number2 * 10 + (int) num2[i];
    }

    if (startIndex2 == 1)
    {
        number2 = number2*-1;
    }

    if (number1 > number2)
        std :: cout << "The first is bigger" << std :: endl;
    else if(number1 < number2)
        std :: cout << "The second is bigger" << std :: endl;
    else
        std::cout<<"They are equal" << std::endl;

  return 0;
}
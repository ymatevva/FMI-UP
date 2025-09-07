#include<iostream>

int main()
{
    char firstSymbol, secondSymbol, thirdSymbol;
    std::cin >> firstSymbol >> secondSymbol >> thirdSymbol;

    int firstNum = firstSymbol - '0';
    int secondNum = secondSymbol - '0';
    int thirdNum = thirdSymbol - '0';

    int result = firstNum * 100 + secondNum * 10 + thirdNum;
    std::cout << result << std::endl;

    return 0;


}
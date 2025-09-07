//
// Created by YoanaM on 7/5/2023.
//
#include<iostream>
#include<limits.h>
#include<cmath>
#include<iomanip>
int main()
{
    char symbol;
    std::cin >> symbol;
    std::cout << (int)symbol;

    // the following are correct too
    // std :: cout << int(symbol);
    // std :: cout << static_cast<int>(symbol);
    return 0;

}


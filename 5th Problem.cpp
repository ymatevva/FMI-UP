//
// Created by YoanaM on 7/5/2023.
//
#include<iostream>
#include<climits>//in order to get the limits of the different types of variables
#include<limits.h>
#include<cmath>
#include<iomanip>
int main()
{
    int number;
    std::cin >> number;

    int lastDigit = number % 10;
    int thirdDigit = number / 10 % 10;
    int secondDigit = number / 100 % 10;
    int firstDigit = number / 1000 % 10;

    std::cout << lastDigit << " - " << thirdDigit << " - " << secondDigit << " - " << firstDigit << std::endl;

    return 0;




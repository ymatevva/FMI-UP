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

    double a;
    double b;
    std::cin >> a >> b;

    // 1) changing places with a temporary variable

    double temp = a;
    a = b;
    b = temp;
    std::cout << a << " " << b;

    //2) with arithmetic operations
    a = a + b;
    b = a - b;
    a = a - b;
    std::cout << "a = " << a << ", b = " << b << std::endl;
}


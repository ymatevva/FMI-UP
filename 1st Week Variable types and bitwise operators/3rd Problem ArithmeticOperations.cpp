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
    int a;
    int b;
    std::cin >> a >> b;
    std::cout << "The sum of a and b is: " << a + b << std::endl;
    std::cout << "The absolute difference of a and b is: " << abs(a - b) << std::endl;
    std::cout << "The remainder  of a/b is: " << a % b << std::endl;
    std::cout << "The division of a and b  is: " << (double)a / b << std::endl;
    std::cout << "The division of a and b in int is: " << a / b << std::endl;
    std::cout << "The division of a and b (lower) is: " << floor(a / b) << std::endl; //using floor to round down
    std::cout << "The sum of a and b is: " << ceil((double)a / (double)b) << std::endl; //using ceil to round up
    std::cout << "a to the power of the sqrt of b: " << pow(a, sqrt(b)) << std::endl;
    std::cout << "logarithm " << std::fixed << std::setprecision(5) << log(floor(a / b)) / log(2) << std::endl;

    //setprecision() is used to get the number of digits after the comma

}
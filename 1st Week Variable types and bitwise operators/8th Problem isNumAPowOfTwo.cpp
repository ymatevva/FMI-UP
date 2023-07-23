
#include<iostream>

int main()
{
    // with bitwise operation
    int numb;
    std::cin >> numb;
    int oneLessThanNumb = numb - 1;
    std::cout << std::boolalpha << ((numb & oneLessThanNumb) == 0);

}
#include <iostream>
//how to find the biggest number
int main()
{
    int num1, num2, num3;
    std :: cin >> num1 >> num2 >> num3;
    int biggest = num1 ;
    if (num2 > num1)
        biggest = num2;

    if (num3 > num2)
        biggest = num3;

    std :: cout << biggest << std :: endl;
    return 0;

// 2nd choice
// we can use the following code too:
    /*
     * int first, second, third;
       std::cin >> first >> second >> third;

     if (first >= second && first >= third)
     {
         std::cout << first << std::endl;
     }
     else if (second >= first && second >= third)
     {
         std::cout << second << std::endl;
     }
     else if (third >= first && third >= second)
     {
         std::cout << third << std::endl;
     }*/

    //3rd choice:
    //  int largest = first > second ? first : second;
    //    largest = largest > third ? largest : third;
    //    std::cout << largest << std::endl;
}
#include <iostream>
//    *
//   ***
//  *****
// *******
//*********
// *******
//  *****
//   ***
//    *
int main() {
    int numRows;
    std :: cin >> numRows;

    char star = '*';

    for (int i = 1; i <= numRows; i++)
    {
        for (int k = 1; k <= numRows - i; k++)
        {
            std :: cout << " ";
        }

        for (int j = 1; j <=2*i-1 ;j++)
        {
            std :: cout << star ;
        }

        std :: cout << std :: endl;
    }
    for (int i = numRows-1; i >= 1; i--)
    {
        for (int k = 1; k <= numRows - i; k++)
        {
            std::cout << " ";
        }

        for (int j = 1; j <= i*2-1; j++)
        {
            std::cout << star ;
        }

        std::cout << std::endl;
    }
    return 0;
}
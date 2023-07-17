#include <iostream>
//the triangle of Pascal
int main()
{
    int numRows;
    std :: cin >> numRows;


    for (int i = 0; i < numRows ; i++)
    {
        int number = 1;
        for (int j = 0; j <= i ; j++)
        {
            std :: cout << number << " " ;
            number = number*(i-j)/(j+1);
        }

        std::cout << std :: endl;
    }
    return 0;
}




#include <iostream>
#include<cassert>
//can be done with switch cases

int main()
{
    int number;
    std :: cin >> number;
    assert(number<0);
    if(number < 25)
    {
        std :: cout << "2.00" << std :: endl;
    }
    else if(number >= 25 && number < 40)
    {
        std :: cout << "3.00" << std :: endl;
    }
    else if(number >= 40 && number < 60)
    {
        std :: cout << "4.00" << std :: endl;
    }
    else if(number >= 60 && number < 80)
    {
        std :: cout << "5.00" << std :: endl;
    }
    else if(number >= 80 & number <= 100)
    {
        std :: cout << "6.00" << std :: endl;
    }

    return 0;
}
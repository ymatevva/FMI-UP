#include <iostream>
#include<cassert>
//checking what kinf of char we have typed

int main()
{
    char symbol ;
    std::cin >> symbol;
    int symbolChanged = (int)symbol;
    if(symbolChanged>=97 && symbolChanged <=122)
    {
        std :: cout << "Small letter" << std :: endl;
    }
    else  if(symbolChanged>=65 && symbolChanged <=90)
    {
        std :: cout << "Capital letter" << std :: endl;
    }
    else if(symbolChanged>=48 && symbolChanged <=57)
    {
        std :: cout << "Digit" << std :: endl;
    }
    else
    {
        std :: cout << "Other" << std :: endl;
    }
  return 0;
}

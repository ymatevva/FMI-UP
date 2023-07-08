#include <iostream>
#include<cassert>
//програма, която проверява колко пъти второто число се съдържа в първото

int main()
{
    int number1;
    std :: cin >> number1;
    assert(number1 >= 1001 && number1 <= 8888);
    int repetition = 0;
    int number2;
    std :: cin >> number2;
    while(number1!=0)
    {
        if( number1 % 10 == number2)
        {
            repetition += 1;
        }

        number1/=10;

    }
  std :: cout << repetition << std :: endl;

  return 0;
}

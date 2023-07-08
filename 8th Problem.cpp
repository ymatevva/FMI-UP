#include <iostream>
#include<cassert>
//checking if a triangle can be formed

int main()
{
    int a, b, c;
    std :: cin >> a >> b >> c;
    if ((a+b)>c && (a+c)>b && (b+c)>a)
    {
        std :: cout << "true" << std :: endl;
    }
    else
        std :: cout << "false" << std :: endl;
  return 0;
}

#include<iostream>

int main()
{
   int a, b, c, d;
   std :: cin >> a >> b >> c >> d;

    if((a*a+b*b) == (c*c+d*d))
    {
        std::cout<<"true"<<std::endl;
    }

    else
        std::cout<<"false";

    return 0;
}
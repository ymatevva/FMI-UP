#include<iostream>
// switching values of two numbers
void mySwitch(int& num1, int& num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

int main()
{
   int a, b;
   std :: cin >> a >> b;

   std :: cout << a << " " << b << std :: endl;
   mySwitch(a,b);
   std :: cout << a << " " << b << std :: endl;

    return 0;
}
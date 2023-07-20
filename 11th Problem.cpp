#include <iostream>
//how to transform a number from decimal to binary
int main()
{
int number;
std :: cin >> number;
int binaryNum = 0;
int order = 1;
while(number!=0){
    binaryNum += order*(number%2);
    number /= 2 ;
    order = order*10;
}
std :: cout << binaryNum;

return 0;
}

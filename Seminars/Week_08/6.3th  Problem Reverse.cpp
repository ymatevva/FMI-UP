#include<iostream>
#include<cstring>
const int MAX_SIZE = 1024;

void myReverse(char* str)
{
    int length = strlen(str);
    for (int i = 0; i < length/2 ; ++i)
    {
        char temp = str[i];
        str[i] = str[length - i - 1 ];
        str[length - i - 1 ] = temp;
    }

}

int main()
{
   char arr[MAX_SIZE] ;
   std :: cin.getline(arr,MAX_SIZE);
   //3rd Problem To reverse the char array
    myReverse(arr);
    std :: cout << "The reversed array is: " << arr << std :: endl;


    return 0;
}
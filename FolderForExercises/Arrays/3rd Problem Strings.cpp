#include<iostream>
#include<cstring>

const int MAX_SIZE = 100;
const int my_exc = 0;
void deleteDigits(char* str2)
{
    int lengthStr2 = strlen(str2);
    int currIndex = 0;

    for (int i = 0; i < lengthStr2 ; ++i)//removing the digits
    {
        if (!(str2[i] >= '0' && str2[i] <= '9'))
        {
            str2[currIndex] = str2[i];
            currIndex++;
        }
    }
    str2[currIndex] = '\0';

}
void concatChars_s(char str1[],int maxNumbSybols,char str2[])
{
    deleteDigits(str2);
    strcat(str1,str2);
}

int main()
{

char str1[MAX_SIZE];
std :: cin >> str1;

int maxNumSybols;
std :: cin >> maxNumSybols;

char str2[MAX_SIZE];
std :: cin >> str2;

concatChars_s(str1,maxNumSybols,str2);

std :: cout << "The new string is: " << str1 << std :: endl;
    return 0;
}
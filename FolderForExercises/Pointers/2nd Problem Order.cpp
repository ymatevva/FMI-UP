#include<iostream>
#include<cstring>
const int MAX_SIZE = 100;

bool isValid(const char* str)
{
    int length = strlen(str);
    for (int i = 0; i < length ; ++i)
    {
        if (!(str[i] >= 'a' && str[i] <= 'z' || str[i] == ' '))
        {
          return false;
        }
    }
    return true;
}

void orderStr(char str[])
{
    int length = strlen(str);

    for (int i = 0; i < length; ++i)
    {
        for (int j = 0; j < length - 1; ++j)
        {
            if (str[j] > str[j + 1])
            {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }

}

void printArray(char str[])
{
    int length = strlen(str);

    for (int i = 0; i < length ; ++i)
    {
        std :: cout << str[i];
    }


}
int main()
{
    char str[MAX_SIZE];
    std :: cin.getline(str,MAX_SIZE);


    if (!isValid(str))
    {
        std :: cout << "Error" << std :: endl;
        return 1;
    }



    orderStr(str);
    printArray(str);



    return 0;
}
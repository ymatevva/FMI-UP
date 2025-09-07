#include<iostream>
//strlen - length of char array
//strcpy(destination, source) - to put one array in other
//strcat - to replace char array element
//strchr - if smth is contained in an array
// strcmp - to compare arrays lexicographically
const int MAX_SIZE = 100;

int myStrLen(char* array)
{
    int count = 0;
   while(*array++)
   {
      count++;
   }
   return count;
}

int main()
{

    char array[] = "hellooooooooooooo";
    std :: cout << myStrLen(array);
    

    return 0;
}
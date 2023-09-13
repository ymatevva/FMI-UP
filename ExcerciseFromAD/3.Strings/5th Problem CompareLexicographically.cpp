#include<iostream>
#include<cstring>
//not completed yet
const int MAX_SIZE = 50;

int wordLength(char *str)
{
    int count = 0;
    while(std::cin>>str)
    {
        count++;
    }
    return count ;
}

char *compare(char *str)
{
    char curWord[MAX_SIZE];
    char tempStr[MAX_SIZE];
    char minWord[MAX_SIZE];
    int index = 0;

    char* p = str;

   while(*p != '\0')
   {
       if (isalpha(*p))
       {
           tempStr[index]=*p;
           index++;
       }
       else
       {
           if (index>0)
           {
               tempStr[index]='\0';
               if (strcmp(curWord,tempStr))
               {
                   strcpy(curWord,tempStr);
               }
               if (curWord[0]=='\0'||minWord[0]=='\0'||strcmp(curWord,minWord))
               {
                   strcpy(minWord,curWord);
               }
               index = 0;
           }
       }
       p++;
   }
return strdup(minWord);

}
int main()
{
    char str[MAX_SIZE];
    std :: cin.getline(str,MAX_SIZE);

    char* smallest = compare(str);

    if (smallest[0] != '\0') {
        std::cout << "Smallest lexicographically word: " << smallest << std::endl;
        free(smallest); // Free the dynamically allocated memory
    } else {
        std::cout << "No words found in the sentence." << std::endl;
    }

    return 0;
}
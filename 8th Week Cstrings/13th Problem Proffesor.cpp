#include<iostream>
#include<cstring>
const int MAX_ROWS = 20;
const int MAX_BOOKS = 30;
const int MAX_TITLE = 100+1;//for '\0'

bool isLexOrdered(char row[][MAX_TITLE], int size)//checks if the titles are ordered lex on each row
{
    for (int i = 0; i < size-1; ++i)
    {
            if (strcmp(row[i],row[i+1] )> 0)
            {
                return false;
            }

    }
    return true;
}

void printWordLength(char str[])//to count the words in the chosen book
{
    int count = 0;
    for (int i = 0; str[i]!='\0' ; ++i)
    {
        if (str[i] == ' ')
        {
            std::cout << count << " ";
            count = 0;
        }
        else
            count++;
    }

    std :: cout << count << " ";
}

void revealPassword(char library[][MAX_BOOKS][MAX_TITLE],int rows,int cols)
{
    for (int i = 0; i < rows; ++i)
    {
        if (isLexOrdered(library[i],cols))
        {
            if(cols % 2 == 0)
            {
                printWordLength(library[i][cols/2-1]);
            }
            else
            {
                printWordLength((library[i][cols/2]));
            }
        }
    }

    std::cout<<std::endl;
}




int main()
{
    char library[MAX_ROWS][MAX_BOOKS][MAX_TITLE] = {
            {"Algebra", "Analytic Geometry", "Calculus"},
            {"Databases", "Artificial Intelligence", "Functional Programming"},
            {"Data Structures and Algorithms", "Introduction to Programming","Object-oriented Programming"}};

   int rows = 3;
   int cols = 3;

  revealPassword(library,rows,cols);

    return 0;
}
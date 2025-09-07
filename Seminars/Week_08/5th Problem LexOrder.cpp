#include<iostream>
#include<cstring>

const int MAX_SIZE = 1024;

void swapStr(char *x, char *y)
{
    char temp[MAX_SIZE];
    strcpy(temp,x);
    strcpy(x, y);
    strcpy(y, temp);

}

int main()
{

   char sentence[MAX_SIZE / 2][MAX_SIZE];//two dimensional array
   int wordCounter = 0, index = 0;
   char c;

    while (std :: cin.get(c))//reading the sentence
    {
        if (c == '\n')//if we have a null terminat\or the sentence has ended
        {
            break;
        }
        if (!isalpha(c))//if character is  not alphabetic
        {
            sentence[wordCounter][index++] = '\0';
            wordCounter++;
            index = 0;
            while(!isalpha(c) && c != '\n')
            {
                std :: cin.get(c);
            }

        }
        sentence[wordCounter][index++] = c;
    }

    for (size_t i = 0; i < wordCounter - 1; i++)
    {

        for (size_t j = 0; j < wordCounter - 1  ; j++)
        {
            if (strcmp(sentence[j], sentence[j+1]) > 0)// sentence[j] > sentence[j+1] - swap
            {
                swapStr(sentence[j], sentence[j+1]);
            }
        }
    }

    for (int i = 0; i < wordCounter ; i++)
    {
        std :: cout << sentence[i] << std :: endl;
    }

    return 0;
}
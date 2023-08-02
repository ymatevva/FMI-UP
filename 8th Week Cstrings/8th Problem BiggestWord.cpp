#include<iostream>
#include<cstring>
const int MAX_SIZE = 1024;

//first we define what punctuation is
const char punctuation[] = {',','.','?','!','-',' ', '.','\0'};

bool isPunctuation(char c)//we check is is symbol is a punctuation
{
    for (int i = 0; i < strlen(punctuation); ++i)
    {
        if (c == punctuation[i])
        {
            return true;
        }
    }
    return false;
}
int main()
{
    char sentence[MAX_SIZE/2][MAX_SIZE];
    int wordCounter = 0;
    int index = 0;
    bool prevWasPunct = false;
    char c;
    while(std::cin.get(c))//while inputing symbols
    {
        if (c == '\n')
        {
            break;
        }
        if(isPunctuation(c))//if the symbol is a punctuation
        {
            if (!prevWasPunct)//if the previous wasn't punctuation
            {
                sentence[wordCounter][index++] = '\0';
                wordCounter++;//the number of words in the sentence
                index = 0;//bc the word has ended
                prevWasPunct = true;//bc now we have found a punct
            }
        }
        else
        {
            sentence[wordCounter][index]=c;
            index++;
            prevWasPunct = false;
        }
    }

    int largestWord = 0;
    for (int i = 1; i < wordCounter ; ++i)
    {
        if (strlen(sentence[largestWord]) < strlen(sentence[i]))
        {
            largestWord = i;
        }
    }

    std::cout<<sentence[largestWord] << std :: endl;

    return 0;
}

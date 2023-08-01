#include<iostream>
#include<cstring>

const int MAX_SIZE = 1024;

void replace(char occurrence,char * array, char replacement, int n)
{
    int length = strlen(array);
    int count = 0;
    for (int i = 0; i < length ; ++i)
    {
        if (array[i] == occurrence)
        {
           count ++;
        }
        if (count == n)
        {
            array[i] = replacement;
            break;
        }
    }
}

int main()
{
    char array[MAX_SIZE];
    std :: cin.getline(array,MAX_SIZE);

    char occurrence;
    std :: cin >> occurrence;

    char replacement;
    std :: cin >> replacement ;

    int N;
    std :: cin >> N;// which of the occurrences to replace


    replace(occurrence, array, replacement, N);
    std :: cout << "The array with the replaced letter is: " << array << std :: endl;


    return 0;
}
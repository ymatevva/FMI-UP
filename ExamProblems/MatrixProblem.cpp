#include <iostream>
const int MAX_SIZE = 50;

bool isExisting(int matrix[][MAX_SIZE],int n)
{
    int count = -1;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if(matrix[i][j]== i*j)
            {
                count++;
            }
            if ( j == n-1)
            {
                if (count == n-1)
                {
                    return true;
                }
                count = 0;
            }
        }
    }
    return false;
}
int main()
{
    int n;
    std :: cin >> n;

    int matrix[MAX_SIZE][MAX_SIZE];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cin>>matrix[i][j];
        }
    }

    bool thereIsRow =  isExisting(matrix,n);

    if (thereIsRow){
        std::cout<<"There is a row of that type."<<std::endl;
    }
    else
    {
        std::cout<<"no"<<std::endl;
    }









    return 0;
}
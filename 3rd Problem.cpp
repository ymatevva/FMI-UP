#include <iostream>
#include<cassert>
#include<cstring>


int main()
{   int n;
    std :: cin >> n;
    int factoriel = 1;
    if (n<0)
    {
        std :: cout <<"Invalid input"<<std::endl;
    }
    else {
        for (int i = 1; i <= n; i++) {
            factoriel *= i;
        }

        std::cout << factoriel << std::endl;
    }
    return 0;

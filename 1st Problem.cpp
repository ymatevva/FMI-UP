#include <iostream>
#include<cassert>
#include<cstring>
//simple for cycle

int main()
{   int n;
    std :: cin >> n ;

    int sum = 0;
    int product = 1;
    for (int i = 1; i <= n; i++) {
        std::cout << i << " ";
        sum+=i;
        product*=i;
    }
    std :: cout << std :: endl;
    std::cout << sum << std :: endl;
    std :: cout << product << std :: endl;
    
    return 0;
    
}

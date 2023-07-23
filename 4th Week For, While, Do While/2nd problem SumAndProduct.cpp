#include <iostream>

int main()
{   int n, m;
    std :: cin >> n >> m;
    int temp;
    int sum = 0;
    int product = 1;
    if (m<n){
        temp = m;
        m=n;
        n = temp;
    }
    /*if (abs(n) % 2 == 1)
    {
        n++;
    }*/
    for (int i = n+1; i <= m; i+=2) {

        std :: cout << i << " ";
        sum += i;
        product *= i;
    }

    std::cout << std :: endl;
    std :: cout << sum << std :: endl;
    std :: cout << product << std :: endl;

    return 0;

}
#include <iostream>
#include<cmath>
//1
//12
//123
//1234
//12345
int main() {
    int n;
    std :: cin >> n;
    for (int i = 1; i <= n; i++)// num of rows
    {
        for (int j = 1;j <= i; j++) //num of cols
        {
            std::cout << j;
        }
        std::cout << std::endl;
    }
    return 0;
}
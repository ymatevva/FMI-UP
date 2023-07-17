#include<iostream>
//1234
//123
//12
//1
int main() {
    int n;
    std :: cin >> n;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1;j <= i; j++) 
        {
            std::cout <<  j ;
        }
        std::cout << std::endl;
    }
    return 0;
}

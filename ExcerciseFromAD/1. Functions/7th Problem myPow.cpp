#include<iostream>
int myPow(int n, int k)
{
    int product = 1;
    for (int i = 0; i < k; ++i)
    {
        product*=n;
    }
    return product;
}
int main()
{
    int n, k;
    std :: cin >> n >> k;

    std::cout << myPow(n,k) << std :: endl;


    return 0;
}
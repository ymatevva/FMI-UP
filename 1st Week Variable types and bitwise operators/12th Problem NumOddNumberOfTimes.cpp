//finding the number which is given odd number of times
#include <iostream>

int main()
{
    int a, b, c, d, e;
    std::cin >> a >> b >> c >> d >> e;
    std::cout << (a ^ b ^ c ^ d ^ e);

    return 0;
}
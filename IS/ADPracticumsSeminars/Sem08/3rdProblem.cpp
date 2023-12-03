#include <iostream>

int extractLastKBits(int n, int k) {
   
    int mask = (1 << k) - 1;

    int result = n & mask;

    return result;
}

int main() {

    int n, k;
    std::cin >> n >> k;

    std :: cout << extractLastKBits(n, k);
   

    return 0;
}

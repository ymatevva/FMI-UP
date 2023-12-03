#include <iostream>


bool isSubstring(int n, int k) {
    int nShift = 0;
    int kLen = 0;

 
    for (int temp = k; temp > 0; temp >>= 1) {
        kLen++;
    }

    while (n > 0) {
        if ((n & ((1 << kLen) - 1)) == k) {
            return true;
        }
        n >>= 1;
        nShift++;
    }

    return false;
}

int main() {
   
    std::cout << std::boolalpha; 
    std::cout << isSubstring(15, 3) << std::endl;  
    std::cout << isSubstring(13, 5) << std::endl;  
    std::cout << isSubstring(13, 7) << std::endl;  
    return 0;
}

#include <iostream>
#include<cstring>
const int MAX_SIZE= 10;
void formatHistogram( char* input) {

    int counts[MAX_SIZE] = {};
    int length = strlen(input);

    for (int i = 0; i < length; i++)
    {
        int digit = input[i] - '0';
        counts[digit]++;
    }
    for (int i = 0; i < MAX_SIZE; i++)
    {
        if (counts[i] > 0)
            std :: cout << counts[i] << " x " << i << ", ";
    }
}


int main() {
    char input[100];
    std::cout << "Enter a number: ";
    std::cin >> input;

    std::cout << "Output: ";
    formatHistogram(input);
    std::cout << std::endl;

    return 0;
}

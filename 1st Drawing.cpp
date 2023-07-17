#include <iostream>
#include<cmath>
//*
//**
//***
//****
//*****
int main() {
    int n;
    std :: cin >> n;
    for (int i = 1; i <= n; i++)// num of rows
    {
        for (int j = 1;j <= i; j++) //num of cols
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}

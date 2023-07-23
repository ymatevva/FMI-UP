#include<iostream>
using namespace std;
int main()

{   //Simple operations
    string myName;
    cin >> myName;
    cout << myName << endl;

    int myAge = 23;

    cout << myAge << " -> " << &myAge << " -> " << sizeof(myAge) << endl;

    return 0;

}
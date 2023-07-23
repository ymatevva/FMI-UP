#include <iostream>
//       1
//      2 3
//     4 5 6
//    7 8 9 10
int main() {
    int numRows;
    std :: cin >> numRows;

    int number = 1;//with this number we will write different nums on each row as it goes up

    for (int i = 1; i <= numRows; i++)// num of rows
    {
        for (int k = 1; k <= numRows-i ; k++)// we need it to be minus i because the space should be getting closer to the left
        {
            std :: cout << " ";
        }

        for (int j = 1; j <= i ;j++)
        {
            std :: cout << number << " ";
            number++;// 1
            // 2 3(bc i is already 2 so we have to write two nums starting with 2 so the next is 3
            // 4 5 6...
        }

        std :: cout << std :: endl;// to go on another line

    }
    return 0;
}
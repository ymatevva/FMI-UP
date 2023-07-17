#include <iostream>
//        *                                                            
//       * *                                                             
//      * * *                                                            
//     * * * *                                                           
//    * * * * *
int main() {
    int numRows;
    std :: cin >> numRows;

    char number = '*';

    for (int i = 1; i <= numRows; i++)// num of rows
    {
        for (int k = 1; k <= numRows - i; k++)// we need it to be minus i because the space should be getting closer to the left
        {
            std :: cout << " ";
        }

        for (int j = 1; j <= i ;j++)
        {
            std :: cout << number << " ";
        }

        std :: cout << std :: endl;// to go on another line
    }
    return 0;
}

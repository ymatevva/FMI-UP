#include <iostream>
#include <vector>

//
int main() {
    const int ROW = 4, COL = 6;
    int arr[ROW][COL] = {{1, 2, 3, 4, 5, 6},
                         {7, 8, 9, 10, 11, 12},
                         {13, 14, 15, 16, 17, 18},
                         {19, 20, 21, 22, 23, 24}};
    int i = 0, curRow = 0, curCol = 0, rowRange = ROW, colRange = COL;

    while (curRow < rowRange && curCol < colRange) {
        for (i = curCol; i < colRange; i++) {
            std::cout << arr[curRow][i] << " ";
        }
        curRow++;

        for (i = curRow; i < rowRange; i++) {
            std::cout << arr[i][colRange - 1] << " ";
        }
        colRange--;

        if (curRow < rowRange) {
            for (i = colRange - 1; i >= curCol; i--) {
                std::cout << arr[rowRange - 1][i] << " ";
            }
            rowRange--;
        }
        if (curCol < colRange) {
            for (i = rowRange - 1; i >= curRow; i--) {
                std::cout << arr[i][curCol] << " ";
            }
            curCol++;
        }
    }
    return 0;
}
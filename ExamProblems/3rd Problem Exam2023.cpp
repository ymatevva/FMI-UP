#include <iostream>
const int MAX_SIZE = 101;

bool equalRings(int matrix[][MAX_SIZE], int N, int &row, int &col) {
    int innerSum = 0;

    // Calculate the sum of the innermost ring
   int centerRow = N/2;
   int centerCol = N/2;
   innerSum+=matrix[centerRow][centerCol];

    for (int layer = 0; layer <= N / 2; ++layer)
    {
        int sumOuter = 0;
        for (int i = layer; i < N - layer; ++i) {
            sumOuter += matrix[layer][i]; // Top row
            sumOuter += matrix[N - 1 - layer][i]; // Bottom row
        }

        for (int i = layer + 1; i < N - 1 - layer; ++i) {
            sumOuter += matrix[i][layer]; // Left column (excluding corners)
            sumOuter += matrix[i][N - 1 - layer]; // Right column (excluding corners)
        }
       
        if (sumOuter != innerSum) {
            row = layer;
            col = layer;
            return false;
        }
    }
    row = -1;
    col = -1;
    return true;
}

int main() {
    int N;
    std::cin >> N;

    int matrix[MAX_SIZE][MAX_SIZE];
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    int row, col;
    if (equalRings(matrix, N, row, col)) {
        std::cout << "All rings are equal." << std::endl;
    } else {
        std::cout << "Rings are not equal. Index: (" << row << ", " << col << ")" << std::endl;
    }

    return 0;
}

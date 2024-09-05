// Q5: Find the row number having the maximum sum in a given matrix

#include <iostream>
using namespace std;

int findMaxSumRow(int matrix[][4], int rows, int cols) {
    int maxSum = 0, rowIndex = 0;

    for (int i = 0; i < rows; i++) {
        int currentSum = 0;
        for (int j = 0; j < cols; j++) {
            currentSum += matrix[i][j];
        }

        if (currentSum > maxSum) {
            maxSum = currentSum;
            rowIndex = i;
        }
    }

    return rowIndex;
}

int main() {
    int matrix[3][4] = {
        {1, 3, 5, 7},
        {3, 4, 7, 8},
        {1, 4, 12, 3}
    };

    cout << "Row with maximum sum: " << findMaxSumRow(matrix, 3, 4) << endl;

    return 0;
}

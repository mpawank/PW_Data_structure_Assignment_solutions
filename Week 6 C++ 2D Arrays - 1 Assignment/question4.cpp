// Q4: Find the largest element of a given 2D array of integers

#include <iostream>
using namespace std;

int findLargest(int matrix[][4], int rows, int cols) {
    int maxElement = matrix[0][0];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] > maxElement) {
                maxElement = matrix[i][j];
            }
        }
    }

    return maxElement;
}

int main() {
    int matrix[4][4] = {
        {1, 3, 4, 6},
        {2, 4, 5, 7},
        {3, 5, 6, 8},
        {4, 6, 7, 9}
    };

    cout << "Largest element: " << findLargest(matrix, 4, 4) << endl;

    return 0;
}

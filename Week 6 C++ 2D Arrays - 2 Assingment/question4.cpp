// Q4: Generate a spiral matrix of size n x n

#include <iostream>
using namespace std;

void generateSpiralMatrix(int n) {
    int matrix[n][n];
    int num = 1, top = 0, bottom = n - 1, left = 0, right = n - 1;

    while (top <= bottom && left <= right) {
        // Traverse from left to right
        for (int i = left; i <= right; i++) {
            matrix[top][i] = num++;
        }
        top++;

        // Traverse from top to bottom
        for (int i = top; i <= bottom; i++) {
            matrix[i][right] = num++;
        }
        right--;

        // Traverse from right to left
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                matrix[bottom][i] = num++;
            }
            bottom--;
        }

        // Traverse from bottom to top
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                matrix[i][left] = num++;
            }
            left++;
        }
    }

    // Display the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n = 3;
    generateSpiralMatrix(n);

    return 0;
}

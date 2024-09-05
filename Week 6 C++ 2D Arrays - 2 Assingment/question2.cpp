// Q2: Rotate the matrix by 90 degrees anti-clockwise
#include <iostream>
using namespace std;

void rotateMatrix(int matrix[][3], int size) {
    int rotated[3][3];

    // Rotate 90 degrees anti-clockwise
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            rotated[size - j - 1][i] = matrix[i][j];
        }
    }

    // Display rotated matrix
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << rotated[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    rotateMatrix(matrix, 3);

    return 0;
}

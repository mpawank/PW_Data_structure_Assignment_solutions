// Q3: Print the matrix in wave form

#include <iostream>
using namespace std;

void wavePrint(int matrix[][3], int rows, int cols) {
    for (int col = cols - 1; col >= 0; col--) {
        if (col % 2 == 0) {  // even index: top to bottom
            for (int row = rows - 1; row >= 0; row--) {
                cout << matrix[row][col] << " ";
            }
        } else {  // odd index: bottom to top
            for (int row = 0; row < rows; row++) {
                cout << matrix[row][col] << " ";
            }
        }
    }
    cout << endl;
}

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    wavePrint(matrix, 3, 3);

    return 0;
}

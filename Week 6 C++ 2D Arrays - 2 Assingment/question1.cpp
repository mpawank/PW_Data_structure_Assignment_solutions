// Q1: Print the elements of both diagonals in a square matrix
#include <iostream>
using namespace std;

void printDiagonals(int matrix[][3], int size) {
    cout << "Primary diagonal: " << endl;
    for (int i = 0; i < size; i++) {
        cout << matrix[i][i] << " ";  // Primary diagonal
    }
    cout << endl;

    cout << "Secondary diagonal: " << endl;
    for (int i = 0; i < size; i++) {
        cout << matrix[i][size - i - 1] << " ";  // Secondary diagonal
    }
    cout << endl;
}

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printDiagonals(matrix, 3);

    return 0;
}

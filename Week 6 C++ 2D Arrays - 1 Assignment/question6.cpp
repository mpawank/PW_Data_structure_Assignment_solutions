// Q6: Write a function which displays the elements of the middle row and middle column of a square matrix

#include <iostream>
using namespace std;

void displayMiddleRowAndColumn(int matrix[][5], int size) {
    int middle = size / 2;

    // Print middle column
    cout << "Middle column: " << endl;
    for (int i = 0; i < size; i++) {
        cout << matrix[i][middle] << " ";
    }
    cout << endl;

    // Print middle row
    cout << "Middle row: " << endl;
    for (int j = 0; j < size; j++) {
        cout << matrix[middle][j] << " ";
    }
    cout << endl;
}

int main() {
    int matrix[5][5] = {
        {1, 2, 3, 4, 5},
        {3, 4, 5, 6, 7},
        {7, 6, 5, 4, 3},
        {8, 7, 6, 5, 4},
        {1, 2, 37, 8, 0}
    };

    displayMiddleRowAndColumn(matrix, 5);

    return 0;
}

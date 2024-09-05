// Q2: Write a program to add two matrices and save the result in one of the given matrices

#include <iostream>
using namespace std;

int main() {
    int matrix1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrix2[3][3] = {{4, 5, 8}, {0, 0, 8}, {1, 2, 0}};
    
    // Add the two matrices and store the result in matrix1
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrix1[i][j] += matrix2[i][j];
        }
    }

    // Display the resulting matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix1[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

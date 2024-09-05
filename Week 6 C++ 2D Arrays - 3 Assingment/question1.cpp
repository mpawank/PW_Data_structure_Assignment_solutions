// C++ Code to Set Entire Row and Column to 0 in Place

#include <iostream>
#include <vector>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    bool firstRowZero = false, firstColZero = false;

    // Check if first row contains any zero
    for (int j = 0; j < cols; j++) {
        if (matrix[0][j] == 0) {
            firstRowZero = true;
            break;
        }
    }

    // Check if first column contains any zero
    for (int i = 0; i < rows; i++) {
        if (matrix[i][0] == 0) {
            firstColZero = true;
            break;
        }
    }

    // Mark zeros on first row and column for other rows/columns
    for (int i = 1; i < rows; i++) {
        for (int j = 1; j < cols; j++) {
            if (matrix[i][j] == 0) {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }

    // Set rows to zero based on first column markers
    for (int i = 1; i < rows; i++) {
        if (matrix[i][0] == 0) {
            for (int j = 1; j < cols; j++) {
                matrix[i][j] = 0;
            }
        }
    }

    // Set columns to zero based on first row markers
    for (int j = 1; j < cols; j++) {
        if (matrix[0][j] == 0) {
            for (int i = 1; i < rows; i++) {
                matrix[i][j] = 0;
            }
        }
    }

    // Set first row to zero if needed
    if (firstRowZero) {
        for (int j = 0; j < cols; j++) {
            matrix[0][j] = 0;
        }
    }

    // Set first column to zero if needed
    if (firstColZero) {
        for (int i = 0; i < rows; i++) {
            matrix[i][0] = 0;
        }
    }
}

void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<vector<int>> matrix = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}
    };

    cout << "Original Matrix: " << endl;
    printMatrix(matrix);

    setZeroes(matrix);

    cout << "Modified Matrix: " << endl;
    printMatrix(matrix);

    return 0;
}

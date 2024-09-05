// Q3: Given a matrix ‘A’ of dimension n x m and 2 coordinates (l1, r1) and (l2, r2), 
//return the sum of the rectangle from (l1, r1) to (l2, r2)

#include <iostream>
using namespace std;

int sumRectangle(int matrix[][4], int l1, int r1, int l2, int r2) {
    int sum = 0;

    // Sum all elements in the rectangle from (l1, r1) to (l2, r2)
    for (int i = l1; i <= l2; i++) {
        for (int j = r1; j <= r2; j++) {
            sum += matrix[i][j];
        }
    }

    return sum;
}

int main() {
    int matrix[4][4] = {
        {1, 2, -3, 4},
        {0, 0, -4, 2},
        {1, -1, 2, 3},
        {-4, -5, -7, 0}
    };

    int l1 = 1, r1 = 2, l2 = 3, r2 = 3;
    cout << "Sum of rectangle: " << sumRectangle(matrix, l1, r1, l2, r2) << endl;

    return 0;
}

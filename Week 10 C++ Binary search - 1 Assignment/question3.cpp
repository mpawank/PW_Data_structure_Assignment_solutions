/*
Given a matrix having 0-1 only where each row is sorted in increasing order, find the row with the
maximum number of 1’s.
Input matrix : 0 1 1 1
0 0 1 1
1 1 1 1 // this row has maximum 1s
0 0 0 0
Output: 2
*/

#include <iostream>
#include <vector>
using namespace std;

int rowWithMaxOnes(const vector<vector<int>>& matrix) {
    int maxRow = -1;
    int maxCount = -1;
    int n = matrix.size();
    int m = matrix[0].size();
    
    for (int i = 0; i < n; ++i) {
        int low = 0, high = m - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (matrix[i][mid] == 1) {
                if (mid == 0 || matrix[i][mid - 1] == 0) {
                    if (m - mid > maxCount) {
                        maxCount = m - mid;
                        maxRow = i;
                    }
                    break;
                }
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
    }
    return maxRow;
}

int main() {
    vector<vector<int>> matrix = {
        {0, 1, 1, 1},
        {0, 0, 1, 1},
        {1, 1, 1, 1},
        {0, 0, 0, 0}
    };
    cout << rowWithMaxOnes(matrix) << endl; // Output: 2
    return 0;
}

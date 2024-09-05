// 1. Count the number of elements strictly greater than x
#include <iostream>
using namespace std;

int countGreaterThanX(int arr[], int n, int x) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > x) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 4;  // Example value
    cout << "Number of elements greater than " << x << ": " << countGreaterThanX(arr, n, x) << endl;
    return 0;
}

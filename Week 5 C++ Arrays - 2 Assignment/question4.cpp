// 4. Find the difference between the sum of elements at even indices and the sum at odd indices
#include <iostream>
using namespace std;

int findDifference(int arr[], int n) {
    int evenSum = 0, oddSum = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            evenSum += arr[i];
        } else {
            oddSum += arr[i];
        }
    }

    return evenSum - oddSum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Difference = " << findDifference(arr, n) << endl;
    return 0;
}

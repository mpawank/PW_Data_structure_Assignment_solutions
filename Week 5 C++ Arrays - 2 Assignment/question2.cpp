// 2. Find the largest three elements in the array

#include <iostream>
#include <algorithm>
using namespace std;

void findLargestThree(int arr[], int n) {
    if (n < 3) {
        cout << "Array should have at least 3 elements!" << endl;
        return;
    }

    int first = INT_MIN, second = INT_MIN, third = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        } else if (arr[i] > second) {
            third = second;
            second = arr[i];
        } else if (arr[i] > third) {
            third = arr[i];
        }
    }

    cout << "The three largest elements are " << first << ", " << second << ", and " << third << endl;
}

int main() {
    int arr[] = {10, 4, 3, 50, 23, 90}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]);
    findLargestThree(arr, n);
    return 0;
}

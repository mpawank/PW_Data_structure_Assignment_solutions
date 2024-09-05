// 6. Find the unique number in an array where all elements are repeated twice except one

#include <iostream>
using namespace std;

int findUnique(int arr[], int n) {
    int unique = 0;
    for (int i = 0; i < n; i++) {
        unique ^= arr[i]; // XOR all elements; duplicates cancel out
    }
    return unique;
}

int main() {
    int arr[] = {2, 3, 5, 4, 5, 3, 4}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Unique element is: " << findUnique(arr, n) << endl;

    return 0;
}

// 5. Modify array: change odd-indexed elements to its second multiple and increment even-indexed values by 10

#include <iostream>
using namespace std;

void modifyArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            arr[i] += 10; // Increment even-indexed values by 10
        } else {
            arr[i] *= 2; // Multiply odd-indexed values by 2
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]);

    modifyArray(arr, n);

    // Print modified array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

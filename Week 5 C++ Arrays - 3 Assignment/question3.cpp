// 3. Find the first non-repeating element in the array

#include <iostream>
#include <unordered_map>
using namespace std;

int firstNonRepeating(int arr[], int n) {
    unordered_map<int, int> freq;

    // Count frequencies of all elements
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    // Find the first element with frequency 1
    for (int i = 0; i < n; i++) {
        if (freq[arr[i]] == 1) {
            return arr[i];
        }
    }

    return -1;  // No non-repeating element found
}

int main() {
    int arr[] = {4, 5, 1, 2, 1, 2, 4};  // Example array
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = firstNonRepeating(arr, n);
    if (result != -1) {
        cout << "First non-repeating element is: " << result << endl;
    } else {
        cout << "No non-repeating element found" << endl;
    }

    return 0;
}

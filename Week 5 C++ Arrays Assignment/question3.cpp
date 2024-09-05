// 3. Find the minimum value out of all elements in the array


#include <iostream>
using namespace std;

int main() {
    int arr[] = {3, 5, 7, 2, 8}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]);

    int min_val = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < min_val) {
            min_val = arr[i];
        }
    }

    cout << "Minimum value = " << min_val << endl;

    return 0;
}

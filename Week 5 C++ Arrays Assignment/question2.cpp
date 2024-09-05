// 2. Find the second largest element in the given Array in one pass

#include <iostream>
using namespace std;

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]);

    int first = INT_MIN, second = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == INT_MIN)
        cout << "There is no second largest element\n";
    else
        cout << "The second largest element is " << second << endl;

    return 0;
}

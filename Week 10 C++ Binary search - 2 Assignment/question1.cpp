/*
Write a program to apply binary search in array sorted in decreasing order.
*/

#include <iostream>
#include <vector>
using namespace std;

int binarySearchDecreasing(const vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            return mid;
        }
        if (arr[mid] < target) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {9, 7, 5, 3, 1};
    int target = 5;
    cout << binarySearchDecreasing(arr, target) << endl; // Output: 2
    return 0;
}


/*
Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n]
inclusive in sorted order.
There is only one repeated number in nums, return this repeated number.
Input 1: arr[] = {1,2,3,3,4}
Output 1: 3
Input 2: arr[] = {1,2,2,3,4,5}
Output 2: 2

*/
#include <iostream>
#include <vector>
using namespace std;

int findRepeatedNumber(const vector<int>& arr) {
    int low = 0, high = arr.size() - 1;
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == arr[mid + 1] || arr[mid] == arr[mid - 1]) {
            return arr[mid];
        }
        if (arr[mid] < mid + 1) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    vector<int> arr1 = {1, 2, 3, 3, 4};
    cout << findRepeatedNumber(arr1) << endl; // Output: 3

    vector<int> arr2 = {1, 2, 2, 3, 4, 5};
    cout << findRepeatedNumber(arr2) << endl; // Output: 2
    return 0;
}



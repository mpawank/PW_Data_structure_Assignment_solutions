/*
Given a sorted array of n elements and a target ‘x’. Find the last occurrence of ‘x’ in the array. If ‘x’
does not exist return -1.
Input 1: arr[] = {1,2,3,3,4,4,4,5} , x = 4
Output 1: 6

*/

#include <iostream>
#include <vector>
using namespace std;

int findLastOccurrence(const vector<int>& arr, int x) {
    int low = 0, high = arr.size() - 1;
    int result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x) {
            result = mid;
            low = mid + 1;
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

int main() {
    vector<int> arr = {1, 2, 3, 3, 4, 4, 4, 5};
    int x = 4;
    cout << findLastOccurrence(arr, x) << endl; // Output: 6
    return 0;
}

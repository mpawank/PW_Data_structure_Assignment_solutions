/*
Given a sorted binary array, efficiently count the total number of 1’s in it.
Input 1 : a = [0,0,0,0,1,1]
Output 1: 2

*/
#include <iostream>
#include <vector>
using namespace std;

int countOnes(const vector<int>& arr) {
    int low = 0, high = arr.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == 1) {
            if (mid == 0 || arr[mid - 1] == 0) {
                return arr.size() - mid;
            }
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return 0;
}

int main() {
    vector<int> a = {0, 0, 0, 0, 1, 1};
    cout << countOnes(a) << endl; // Output: 2
    return 0;
}

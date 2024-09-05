/*
You have a sorted array of infinite numbers, how would you search an element in the array?
*/
#include <iostream>
#include <vector>
using namespace std;

// Function to simulate the access of infinite array
int getElementAt(int index) {
    // Example implementation: You should replace this with actual data access.
    static vector<int> arr = {1, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    if (index >= arr.size()) return -1;
    return arr[index];
}

int searchInInfiniteArray(int target) {
    int low = 0;
    int high = 1;
    while (getElementAt(high) != -1 && getElementAt(high) < target) {
        low = high;
        high *= 2;
    }
    while (low <= high) {
        int mid = low + (high - low) / 2;
        int midValue = getElementAt(mid);
        if (midValue == target) {
            return mid;
        }
        if (midValue < target || midValue == -1) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int target = 10;
    cout << searchInInfiniteArray(target) << endl; // Output: 5
    return 0;
}

/* explaination
{The approach involves first finding the range where the element might exist and then applying binary search within that range. 
Since we don't have a clear end for the array, we start by exponentially increasing the search range.}

*/
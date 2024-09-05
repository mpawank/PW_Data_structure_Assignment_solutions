// 4. Check if an array is a subset of another

#include <iostream>
#include <unordered_set>
using namespace std;

bool isSubset(int arr1[], int n1, int arr2[], int n2) {
    unordered_set<int> elements;

    // Insert all elements of the first array into a set
    for (int i = 0; i < n1; i++) {
        elements.insert(arr1[i]);
    }

    // Check if all elements of the second array are present in the set
    for (int i = 0; i < n2; i++) {
        if (elements.find(arr2[i]) == elements.end()) {
            return false;
        }
    }

    return true;
}

int main() {
    int arr1[] = {11, 1, 13, 21, 3, 7};  // Main array
    int arr2[] = {11, 3, 7, 1};  // Subset array

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    if (isSubset(arr1, n1, arr2, n2)) {
        cout << "arr2[] is a subset of arr1[]" << endl;
    } else {
        cout << "arr2[] is not a subset of arr1[]" << endl;
    }

    return 0;
}

// 5. WAP to find the smallest missing positive element in the sorted array that contains only positive elements

#include <iostream>
using namespace std;

int findSmallestMissing(int arr[], int n) {
    int missing = 1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == missing) {
            missing++;
        }
    }

    return missing;
}

int main() {
    int arr[] = {1, 2, 3, 5}; // Example sorted array
    int n = sizeof(arr) / sizeof(arr[0]);

    int missing = findSmallestMissing(arr, n);

    cout << "Smallest missing positive element = " << missing << endl;

    return 0;
}

// 1. Count the number of triplets whose sum is equal to the given value x
#include <iostream>
#include <algorithm>
using namespace std;

int countTriplets(int arr[], int n, int x) {
    int count = 0;

    // Sort the array first
    sort(arr, arr + n);

    for (int i = 0; i < n - 2; i++) {
        int left = i + 1;
        int right = n - 1;

        while (left < right) {
            int sum = arr[i] + arr[left] + arr[right];

            if (sum == x) {
                count++;
                left++;
                right--;
            } else if (sum < x) {
                left++;
            } else {
                right--;
            }
        }
    }

    return count;
}

int main() {
    int arr[] = {1, 5, 3, 2, 4};  // Example array
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 9;  // Example sum

    cout << "Number of triplets: " << countTriplets(arr, n, x) << endl;
    return 0;
}

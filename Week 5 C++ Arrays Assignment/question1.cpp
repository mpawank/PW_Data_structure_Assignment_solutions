// 1. Calculate the product of all the elements in the given array

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]);
    int product = 1;

    for (int i = 0; i < n; i++) {
        product *= arr[i]; // Multiply each element with product
    }

    cout << "Product of all elements = " << product << endl;

    return 0;
}

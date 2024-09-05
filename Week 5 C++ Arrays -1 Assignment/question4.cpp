// 4. Given an array, predict if the array contains duplicates or not

#include <iostream>
#include <set>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 3}; // Example array with duplicate 3
    int n = sizeof(arr) / sizeof(arr[0]);
    set<int> s;

    bool has_duplicates = false;

    for (int i = 0; i < n; i++) {
        if (s.find(arr[i]) != s.end()) {
            has_duplicates = true;
            break;
        }
        s.insert(arr[i]);
    }

    if (has_duplicates)
        cout << "Array contains duplicates.\n";
    else
        cout << "Array does not contain duplicates.\n";

    return 0;
}

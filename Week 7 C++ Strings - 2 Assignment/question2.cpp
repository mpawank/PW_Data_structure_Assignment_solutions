/*
Find the second largest digit in the string consisting of digits from ‘0’ to ‘9’.
Input : str = "2947578"
Output : 8
Input : str = "1241"
Output : 2
*/

#include <iostream>
#include <string>
#include <set>
using namespace std;

int secondLargestDigit(string s) {
    set<int> digits;
    for (char ch : s) {
        if (isdigit(ch)) {
            digits.insert(ch - '0');
        }
    }
    if (digits.size() < 2) return -1;  // Less than 2 unique digits
    auto it = digits.end();
    --it;  // Last element (largest digit)
    --it;  // Second last element (second largest digit)
    return *it;
}

int main() {
    cout << secondLargestDigit("2947578") << endl;  // Output: 8
    cout << secondLargestDigit("1241") << endl;     // Output: 2
    return 0;
}

/* Check whether the given string is palindrome or not.
Input : "abcde"
Output : No
Input : "abcdcba"
Output : Yes 
*/

#include <iostream>
#include <string>
using namespace std;

string isPalindrome(string s) {
    int n = s.length();
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - i - 1]) {
            return "No";
        }
    }
    return "Yes";
}

int main() {
    cout << isPalindrome("abcde") << endl;    // Output: "No"
    cout << isPalindrome("abcdcba") << endl;  // Output: "Yes"
    return 0;
}

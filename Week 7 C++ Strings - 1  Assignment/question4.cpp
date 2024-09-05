/* Input a string of even length and reverse the second half of the string.
Input : str = "abcdefgh"
Output : abcdhgfe
Input :str = "pwians"
Output : pwisna */

#include <iostream>
#include <string>
using namespace std;

string reverseSecondHalf(string s) {
    int n = s.length();
    if (n % 2 == 0) {
        string firstHalf = s.substr(0, n / 2);
        string secondHalf = s.substr(n / 2);
        reverse(secondHalf.begin(), secondHalf.end());
        return firstHalf + secondHalf;
    } else {
        string firstHalf = s.substr(0, n / 2);
        string secondHalf = s.substr(n / 2);
        reverse(secondHalf.begin(), secondHalf.end());
        return firstHalf + secondHalf;
    }
}

int main() {
    cout << reverseSecondHalf("abcdefgh") << endl;  // Output: "abcdhgfe"
    cout << reverseSecondHalf("pwians") << endl;    // Output: "pwisna"
    return 0;
}

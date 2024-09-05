/* Input a string of length n and count all the consonants in the given string.
Input : "pwians"
Output : 4
Input : "abdc"
Output : 3 */

#include <iostream>
#include <string>
using namespace std;

bool isConsonant(char ch) {
    char lower = tolower(ch);
    return (lower >= 'a' && lower <= 'z' && lower != 'a' && lower != 'e' && lower != 'i' && lower != 'o' && lower != 'u');
}

int countConsonants(string s) {
    int count = 0;
    for (char ch : s) {
        if (isConsonant(ch)) {
            count++;
        }
    }
    return count;
}

int main() {
    cout << countConsonants("pwians") << endl; // Output: 4
    cout << countConsonants("abdc") << endl;   // Output: 3
    return 0;
}

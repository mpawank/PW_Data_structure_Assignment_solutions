/*
Input a string and return the number of substrings that contain only vowels.
Input : str = "abjkoe"
Output : 4
*/

#include <iostream>
#include <string>
using namespace std;

int countVowelSubstrings(string s) {
    string vowels = "aeiou";
    int count = 0;
    int n = s.length();
    
    for (int i = 0; i < n; i++) {
        if (vowels.find(s[i]) != string::npos) {
            int j = i;
            while (j < n && vowels.find(s[j]) != string::npos) {
                count++;
                j++;
            }
        }
    }
    return count;
}

int main() {
    cout << countVowelSubstrings("abjkoe") << endl;  // Output: 4
    cout << countVowelSubstrings("hgdhpw") << endl;  // Output: 0
    return 0;
}

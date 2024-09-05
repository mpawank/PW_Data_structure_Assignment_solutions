/*
Input a string and concatenate with its reverse string and print it.
Input : str = "PWSkills"
Output : "PWSkillssllikSWP"
Input : str = "pw"
Output : "pwwp"
*/

#include <iostream>
#include <string>
using namespace std;

string concatenateWithReverse(string s) {
    string reverse_s = s;
    reverse(reverse_s.begin(), reverse_s.end());  // Reverse the string
    return s + reverse_s;
}

int main() {
    cout << concatenateWithReverse("PWSkills") << endl;  // Output: "PWSkillssllikSWP"
    cout << concatenateWithReverse("pw") << endl;        // Output: "pwwp"
    return 0;
}

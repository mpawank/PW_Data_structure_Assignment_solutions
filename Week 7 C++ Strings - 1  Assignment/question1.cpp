/*Input a string of size n and update all the odd positions in the string to character ‘#’. Consider
0-based indexing.
Input : str = "Pbwcshkuiglhlds"
Output : "P#w#s#k#i#l#l#s"
input : str = "a"
Output : "a" */

#include <iostream>
#include <string>
using namespace std;

string updateOddPositions(string s) {
    for (int i = 0; i < s.length(); i++) {
        if (i % 2 == 1) {  // Check for odd positions (0-based index)
            s[i] = '#';
        }
    }
    return s;
}

int main() {
    cout << updateOddPositions("Pbwcshkuiglhlds") << endl; // Output: "P#w#s#k#i#l#l#s"
    cout << updateOddPositions("a") << endl;               // Output: "a"
    return 0;
}

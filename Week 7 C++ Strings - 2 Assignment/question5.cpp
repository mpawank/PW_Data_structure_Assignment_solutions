/*
Given a sentence ‘str’, return the word that is lexicographically maximum.
Input : str = "proud to be pwians"
Output : pwians
Input : str = "decode dsa with pw"
Output : with
*/

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string lexicographicallyMaxWord(string s) {
    stringstream ss(s);
    string word, max_word;
    while (ss >> word) {
        if (word > max_word) {
            max_word = word;
        }
    }
    return max_word;
}

int main() {
    cout << lexicographicallyMaxWord("proud to be pwians") << endl;  // Output: pwians
    cout << lexicographicallyMaxWord("decode dsa with pw") << endl;  // Output: with
    return 0;
}

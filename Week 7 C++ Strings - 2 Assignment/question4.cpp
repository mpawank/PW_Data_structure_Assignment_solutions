/*
Given an array of strings. Check whether they are anagram or not.
Input : s = "car" , t = "arc"
Output : True
Input : s = "book" , t = "hook"
Output : False
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool areAnagrams(string s, string t) {
    if (s.length() != t.length()) return false;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    return s == t;
}

int main() {
    cout << (areAnagrams("car", "arc") ? "True" : "False") << endl;  // Output: True
    cout << (areAnagrams("book", "hook") ? "True" : "False") << endl; // Output: False
    return 0;
}

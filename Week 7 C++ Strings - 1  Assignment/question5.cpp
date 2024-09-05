/*
Input a string of length less than 10 and convert it into integer without using builtin function.
Input : "3244"
Output : 3244
Input : "12"
Output : 12
*/ 

#include <iostream>
#include <string>
using namespace std;

int stringToInt(string s) {
    int num = 0;
    for (char ch : s) {
        num = num * 10 + (ch - '0');  // Convert char to int manually
    }
    return num;
}

int main() {
    cout << stringToInt("3244") << endl;  // Output: 3244
    cout << stringToInt("12") << endl;    // Output: 12
    return 0;
}

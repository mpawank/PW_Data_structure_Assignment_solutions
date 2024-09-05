/*

Given a number ‘n’. Predict whether ‘n’ is a valid perfect square or not.
Input 1: n = 36
Output 1: yes

Input 2: n = 45
Output 2: no

*/

#include <iostream>
#include <cmath>
using namespace std;

bool isPerfectSquare(int n) {
    if (n < 0) return false;
    int sqRoot = static_cast<int>(sqrt(n));
    return (sqRoot * sqRoot == n);
}

int main() {
    int n1 = 36;
    cout << (isPerfectSquare(n1) ? "yes" : "no") << endl; // Output: yes

    int n2 = 45;
    cout << (isPerfectSquare(n2) ? "yes" : "no") << endl; // Output: no
    return 0;
}

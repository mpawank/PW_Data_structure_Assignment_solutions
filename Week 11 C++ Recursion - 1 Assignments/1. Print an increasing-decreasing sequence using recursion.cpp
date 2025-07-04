#include <iostream>
using namespace std;

void printIncDec(int n, int current = 1) {
    if (current > n) return;
    cout << current << " ";
    printIncDec(n, current + 1);
    if (current < n) // avoid repeating the middle number
        cout << current << " ";
}

int main() {
    int n = 5;
    printIncDec(n);
    return 0;
}

// Q1: Print squares of the first n natural numbers

#include <iostream>

using namespace std;

void printSquares(int n) {
    for (int i = 1; i <= n; ++i) {
        cout << i * i << " ";
    }
    cout << endl; // For a new line after printing all squares
}

int main() {
    int n;
    cout << "Enter the number of natural numbers: ";
    cin >> n;
    
    printSquares(n);

    return 0;
}

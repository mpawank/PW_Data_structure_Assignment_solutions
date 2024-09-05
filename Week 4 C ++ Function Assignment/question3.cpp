// Q3: Print all odd numbers between a and b
#include <iostream>
using namespace std;

void printOddNumbers(int a, int b) {
    for (int i = a; i <= b; ++i) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }
    cout << endl; // New line after printing all odd numbers
}

int main() {
    int a, b;
    cout << "Enter the start and end values: ";
    cin >> a >> b;
    
    printOddNumbers(a, b);

    return 0;
}

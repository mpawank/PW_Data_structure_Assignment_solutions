#include <iostream>
using namespace std;

int sumOdd(int a, int b) {
    if (a > b) return 0;
    if (a % 2 == 0)
        return sumOdd(a + 1, b); // skip even
    return a + sumOdd(a + 2, b); // add odd and jump to next odd
}

int main() {
    int a = 3, b = 11;
    cout << "Sum of odd numbers from " << a << " to " << b << " is: " << sumOdd(a, b);
    return 0;
}

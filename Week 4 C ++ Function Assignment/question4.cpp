// Q4: Count the number of digits in a number and print its square

#include <iostream>
using namespace std;

int countDigits(int number) {
    if (number == 0) return 1; // Special case for 0
    
    int count = 0;
    while (number != 0) {
        number /= 10;
        ++count;
    }
    return count;
}

void printSquareOfDigitCount(int number) {
    int digitCount = countDigits(number);
    cout << "The square of the number of digits is: " << digitCount * digitCount << endl;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    
    printSquareOfDigitCount(number);

    return 0;
}

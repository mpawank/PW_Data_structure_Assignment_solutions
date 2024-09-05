// 2. Find the factorial of a large number

#include <iostream>
#include <vector>
using namespace std;

void multiply(vector<int>& result, int num) {
    int carry = 0;

    for (int i = 0; i < result.size(); i++) {
        int prod = result[i] * num + carry;
        result[i] = prod % 10;  // Store the last digit
        carry = prod / 10;      // Carry for the next iteration
    }

    // Add remaining carry to the result
    while (carry) {
        result.push_back(carry % 10);
        carry /= 10;
    }
}

void factorial(int n) {
    vector<int> result;
    result.push_back(1);  // Initial factorial value: 1

    for (int i = 2; i <= n; i++) {
        multiply(result, i);
    }

    cout << "Factorial of " << n << " is: ";
    for (int i = result.size() - 1; i >= 0; i--) {
        cout << result[i];
    }
    cout << endl;
}

int main() {
    int n = 100;  // Example large number
    factorial(n);
    return 0;
}

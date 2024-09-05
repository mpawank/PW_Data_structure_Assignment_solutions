#include <iostream>
using namespace std;
int main() {
    // Radius of the circle
    double radius = 10.0;

    // Define the value of π (approximation)
    const double PI = 3.141592653589793;

    // Calculate circumference using the formula: Circumference = 2 * π * radius
    double circumference = 2 * PI * radius;

    // Output the result
    cout << "The circumference of the circle with radius " << radius << " is " << circumference << std::endl;

    return 0;
}

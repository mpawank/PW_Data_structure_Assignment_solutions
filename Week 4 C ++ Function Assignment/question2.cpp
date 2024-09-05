// Q2: Calculate the area of a circle given its radius

#include <iostream>
#include <cmath> // For M_PI
using namespace std;

double circleArea(double radius) {
    return M_PI * radius * radius;
}

int main() {
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    
    cout << "The area of the circle is: " << circleArea(radius) << endl;

    return 0;
}


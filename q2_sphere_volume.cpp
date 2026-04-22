#include <iostream>
#include <cmath>   
using namespace std;

int main() {
    double radius;
    const double PI = 3.14159265358979;

    // Ask the user to input the radius
    cout << "Enter the radius of the sphere: ";
    cin >> radius;

    // Calculate the volume using the formula: V = (4/3) * PI * r^3
    double volume = (4.0 / 3.0) * PI * pow(radius, 3);

    // Display the result
    cout << "Volume of the sphere = " << volume << endl;

    return 0;
}

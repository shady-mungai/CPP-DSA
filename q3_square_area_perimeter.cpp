#include <iostream>
using namespace std;

// Function to calculate the area of a square
double calculateArea(double side) {
    return side * side;
}

// Function to calculate the perimeter of a square
double calculatePerimeter(double side) {
    return 4 * side;
}

int main() {
    double side;

    // Ask the user to enter the side length
    cout << "Enter the side length of the square: ";
    cin >> side;

    // Call functions and display results
    cout << "Area of the square      = " << calculateArea(side) << endl;
    cout << "Perimeter of the square = " << calculatePerimeter(side) << endl;

    return 0;
}
